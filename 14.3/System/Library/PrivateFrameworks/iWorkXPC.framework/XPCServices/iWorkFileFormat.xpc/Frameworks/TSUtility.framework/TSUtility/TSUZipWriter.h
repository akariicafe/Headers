@class TSUZipWriterEntry, NSArray, NSMutableDictionary, NSError, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_data, TSURandomWriteChannel, OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSUZipWriter : NSObject {
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_channelQueue;
    id<TSURandomWriteChannel> _writeChannel;
    NSObject<OS_dispatch_semaphore> *_writeChannelCompletionSemaphore;
    NSMutableArray *_entries;
    NSArray *_sortedEntries;
    NSMutableDictionary *_entriesMap;
    TSUZipWriterEntry *_currentEntry;
    BOOL _isClosed;
    BOOL _calculateSize;
    BOOL _force32BitSize;
    BOOL _calculateCRC;
    unsigned long long _sizeToMatch;
    unsigned int _CRCToMatch;
    NSDate *_lastModificationDateIfSizeAndCRCMatches;
    NSDate *_newEntryLastModificationDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long long _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
}

@property (readonly) unsigned long long archiveLength;
@property (readonly) unsigned long long entriesCount;
@property (readonly) NSArray *sortedEntries;
@property (readonly) BOOL isClosed;

- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addData:(id)a0;
- (void)writeData:(id)a0;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (unsigned long long)entriesCountImpl;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)a0;
- (void)beginEntryWithNameImpl:(id)a0 force32BitSize:(BOOL)a1 lastModificationDate:(id)a2 size:(unsigned long long)a3 CRC:(unsigned int)a4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a5;
- (void)finishEntry;
- (id)localFileHeaderDataForEntry:(id)a0;
- (void)addData:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)addDataImpl:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)flushEntryData;
- (void)writeData:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)p_writeChannel;
- (void)handleWriteError:(id)a0;
- (void)writeData:(id)a0 offset:(long long)a1;
- (void)writeEntryWithName:(id)a0 force32BitSize:(BOOL)a1 lastModificationDate:(id)a2 size:(unsigned long long)a3 CRC:(unsigned int)a4 fromReadChannel:(id)a5 writeHandler:(id /* block */)a6;
- (void)writeEntryWithName:(id)a0 force32BitSize:(BOOL)a1 lastModificationDate:(id)a2 size:(unsigned long long)a3 CRC:(unsigned int)a4 fromReadChannel:(id)a5 completion:(id /* block */)a6;
- (void)addExistingEntryImpl:(id)a0;
- (void)setEntryInsertionOffsetImpl:(long long)a0;
- (void)addBarrier:(id /* block */)a0;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)a0;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)a0 size:(long long)a1 entryCount:(unsigned long long)a2;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)a0 size:(long long)a1 entryCount:(unsigned long long)a2;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)a0;
- (void)p_writeData:(id)a0 offset:(long long)a1 completion:(id /* block */)a2;
- (id)sortedEntriesImpl;
- (void)truncateToNumberOfEntriesImpl:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)truncateToOffsetImpl:(long long)a0 completion:(id /* block */)a1;
- (void)beginEntryWithName:(id)a0 force32BitSize:(BOOL)a1 lastModificationDate:(id)a2 size:(unsigned long long)a3 CRC:(unsigned int)a4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a5;
- (void)flushCurrentEntryWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)writeEntryWithName:(id)a0 force32BitSize:(BOOL)a1 fromReadChannel:(id)a2 completion:(id /* block */)a3;
- (void)addExistingEntry:(id)a0;
- (void)setEntryInsertionOffset:(long long)a0;
- (void)closeWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)entryWithName:(id)a0;
- (void)truncateToNumberOfEntries:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)truncateToOffset:(long long)a0 completion:(id /* block */)a1;

@end
