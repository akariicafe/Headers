@class NSMutableDictionary, NSMutableOrderedSet;

@interface TSUZipArchive : NSObject {
    unsigned long long _options;
    NSMutableDictionary *_entriesMap;
    NSMutableOrderedSet *_entries;
}

@property (readonly, nonatomic) unsigned long long archiveLength;
@property (readonly, nonatomic) long long endOfLastEntry;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long entriesCount;
@property (readonly, nonatomic) BOOL hasNonEmptyEntries;

- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)debugDescription;
- (id)init;
- (void)addEntry:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)entryForName:(id)a0;
- (void)collapseCommonRootDirectory;
- (id)containedZipArchiveForEntry:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)newArchiveReadChannel;
- (id)normalizeEntryName:(id)a0;
- (void)readArchiveWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)readCentralDirectoryData:(id)a0 entryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)a0 offset:(long long)a1 size:(unsigned long long)a2 channel:(id)a3 completion:(id /* block */)a4;
- (BOOL)readCentralFileHeaderWithBuffer:(const void **)a0 dataSize:(unsigned long long *)a1 error:(id *)a2;
- (id)readChannelForEntry:(id)a0;
- (id)readChannelForEntry:(id)a0 validateCRC:(BOOL)a1;
- (void)readEndOfCentralDirectoryData:(id)a0 eocdOffset:(long long)a1 channel:(id)a2 completion:(id /* block */)a3;
- (BOOL)readExtraFieldsFromBuffer:(const void **)a0 extraFieldsLength:(unsigned short)a1 entry:(id)a2 dataSize:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)readFileCommentFromBuffer:(const void **)a0 fileCommentLength:(unsigned short)a1 entry:(id)a2 dataSize:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)readFilenameFromBuffer:(const void **)a0 nameLength:(unsigned short)a1 entry:(id)a2 dataSize:(unsigned long long *)a3 error:(id *)a4;
- (void)readLocalFileHeaderData:(id)a0 atOffset:(long long)a1 channel:(id)a2 completion:(id /* block */)a3;
- (void)readLocalFileHeaderEntriesFromChannel:(id)a0 offset:(long long)a1 previousEntry:(id)a2 seekAttempts:(unsigned int)a3 seekForward:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)readLocalFileHeaderFilenameAndExtraFieldsData:(id)a0 forEntry:(id)a1 error:(id *)a2;
- (void)readZip64EndOfCentralDirectoryData:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)a0 eocdOffset:(long long)a1 completion:(id /* block */)a2;
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)a0 offset:(long long)a1 completion:(id /* block */)a2;
- (BOOL)readZip64ExtraFieldFromBuffer:(const void *)a0 dataLength:(unsigned short)a1 entry:(id)a2 error:(id *)a3;
- (id)streamReadChannelForEntry:(id)a0;
- (id)streamReadChannelForEntry:(id)a0 validateCRC:(BOOL)a1;

@end
