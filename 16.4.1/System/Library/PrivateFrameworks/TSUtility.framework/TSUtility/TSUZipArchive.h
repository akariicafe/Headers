@class NSMutableDictionary;
@protocol TSUReadChannel;

@interface TSUZipArchive : NSObject {
    NSMutableDictionary *_entries;
}

@property (readonly, nonatomic) unsigned long long archiveLength;
@property (readonly, nonatomic) id<TSUReadChannel> readChannel;

- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)debugDescription;
- (id)init;
- (void)addEntry:(id)a0;
- (void).cxx_destruct;
- (id)entryForName:(id)a0;
- (void)readArchiveWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)readChannelForEntry:(id)a0;
- (void)readCentralDirectoryData:(id)a0 entryCount:(unsigned long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)a0 offset:(long long)a1 size:(long long)a2 channel:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (BOOL)readCentralFileHeaderWithBuffer:(const void **)a0 dataSize:(unsigned long long *)a1;
- (void)readEndOfCentralDirectoryData:(id)a0 channel:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
