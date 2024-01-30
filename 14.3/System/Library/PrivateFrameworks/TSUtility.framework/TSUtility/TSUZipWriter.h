@class NSObject, NSMutableSet, NSError, TSUZipWriterEntry, NSMutableArray;
@protocol OS_dispatch_queue, TSURandomWriteChannel, OS_dispatch_data;

@interface TSUZipWriter : NSObject {
    NSMutableArray *_entries;
    NSMutableSet *_entryNames;
    TSUZipWriterEntry *_currentEntry;
    BOOL _calculateSize;
    BOOL _calculateCRC;
    unsigned short _entryTime;
    unsigned short _entryDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long long _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
}

@property (readonly, nonatomic) id<TSURandomWriteChannel> writeChannel;
@property (readonly, nonatomic) unsigned long long archiveLength;

- (id)init;
- (void).cxx_destruct;
- (void)addData:(id)a0;
- (void)writeData:(id)a0;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (void)finishEntry;
- (id)localFileHeaderDataForEntry:(id)a0;
- (void)flushEntryData;
- (void)handleWriteError:(id)a0;
- (void)writeData:(id)a0 offset:(long long)a1;
- (void)writeCentralDirectory;
- (void)closeWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)writeEntryWithName:(id)a0 fromReadChannel:(id)a1 completion:(id /* block */)a2;
- (void)initEntryTime;
- (void)beginEntryWithName:(id)a0 size:(unsigned long long)a1 CRC:(unsigned int)a2;
- (void)beginEntryWithNameImpl:(id)a0 size:(unsigned long long)a1 CRC:(unsigned int)a2;
- (void)addDataImpl:(id)a0;
- (void)writeEntryWithName:(id)a0 size:(unsigned long long)a1 CRC:(unsigned int)a2 fromReadChannel:(id)a3 completion:(id /* block */)a4;
- (id)centralFileHeaderDataForEntry:(id)a0;
- (id)endOfCentralDirectoryDataWithOffset:(long long)a0 size:(long long)a1;
- (void)beginEntryWithName:(id)a0;

@end
