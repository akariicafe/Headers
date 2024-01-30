@class NSError, NSMutableDictionary, BUZipWriterEntry, NSArray, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_data, BURandomWriteChannel, OS_dispatch_queue;

@interface BUZipWriter : NSObject {
    NSArray *_sortedEntries;
}

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *channelQueue;
@property (retain, nonatomic) id<BURandomWriteChannel> writeChannel;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *writeChannelCompletionGroup;
@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSMutableDictionary *entriesMap;
@property (retain, nonatomic) BUZipWriterEntry *currentEntry;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (nonatomic) BOOL calculateSize;
@property (nonatomic) BOOL force32BitSize;
@property (nonatomic) BOOL calculateCRC;
@property (nonatomic) unsigned long long sizeToMatch;
@property (nonatomic) unsigned int CRCToMatch;
@property (retain, nonatomic) NSDate *lastModificationDateIfSizeAndCRCMatches;
@property (retain, nonatomic) NSDate *updatedEntryLastModificationDate;
@property (nonatomic) long long currentOffset;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *localFileHeaderData;
@property (retain, nonatomic) NSMutableArray *entryDatas;
@property (nonatomic) unsigned long long entryDataSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (nonatomic) long long writtenOffset;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long archiveLength;
@property (readonly) unsigned long long entriesCount;
@property (readonly) NSArray *sortedEntries;
@property (readonly) BOOL isClosed;

- (void)writeData:(id)a0;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)addData:(id)a0;
- (void).cxx_destruct;
- (id)init;
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
