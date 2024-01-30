@class NSMutableDictionary, NSMutableOrderedSet;

@interface BUZipArchive : NSObject

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSMutableDictionary *entriesMap;
@property (retain, nonatomic) NSMutableOrderedSet *entries;
@property (nonatomic) long long endOfLastEntry;
@property (readonly, nonatomic) unsigned long long archiveLength;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long entriesCount;
@property (readonly, nonatomic) BOOL hasNonEmptyEntries;
@property (readonly, nonatomic) unsigned long long totalSize;

+ (void)test_setForceZipEntriesRecalculationOnRead:(BOOL)a0;

- (void)addEntry:(id)a0;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (void)readArchiveWithQueue:(id)a0 completion:(id /* block */)a1;
- (BOOL)extractToURL:(id)a0 error:(id *)a1;
- (id)newArchiveReadChannel;
- (id)streamReadChannelForEntry:(id)a0;
- (void)collapseCommonRootDirectory;
- (void)readLocalFileHeaderEntriesFromChannel:(id)a0 offset:(long long)a1 previousEntry:(id)a2 seekAttempts:(unsigned int)a3 seekForward:(BOOL)a4 completion:(id /* block */)a5;
- (void)readEndOfCentralDirectoryData:(id)a0 eocdOffset:(long long)a1 channel:(id)a2 completion:(id /* block */)a3;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)a0 eocdOffset:(long long)a1 completion:(id /* block */)a2;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)a0 offset:(long long)a1 size:(unsigned long long)a2 channel:(id)a3 completion:(id /* block */)a4;
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)a0 offset:(long long)a1 completion:(id /* block */)a2;
- (void)readZip64EndOfCentralDirectoryData:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
- (void)readCentralDirectoryData:(id)a0 entryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)readCentralFileHeaderWithBuffer:(const void **)a0 dataSize:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)readFilenameFromBuffer:(const void **)a0 nameLength:(unsigned short)a1 entry:(id)a2 dataSize:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)readExtraFieldsFromBuffer:(const void **)a0 extraFieldsLength:(unsigned short)a1 entry:(id)a2 dataSize:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)readFileCommentFromBuffer:(const void **)a0 fileCommentLength:(unsigned short)a1 entry:(id)a2 dataSize:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)readZip64ExtraFieldFromBuffer:(const void *)a0 dataLength:(unsigned short)a1 entry:(id)a2 error:(id *)a3;
- (void)readLocalFileHeaderData:(id)a0 atOffset:(long long)a1 channel:(id)a2 completion:(id /* block */)a3;
- (BOOL)readLocalFileHeaderFilenameAndExtraFieldsData:(id)a0 forEntry:(id)a1 error:(id *)a2;
- (id)normalizeEntryName:(id)a0;
- (id)readChannelForEntry:(id)a0 validateCRC:(BOOL)a1;
- (id)streamReadChannelForEntry:(id)a0 validateCRC:(BOOL)a1;
- (BOOL)extractToURL:(id)a0 error:(id *)a1 shouldExtractEntry:(id /* block */)a2 didExtractEntry:(id /* block */)a3;
- (id)entryForName:(id)a0;
- (void)test_removeEntryWithName:(id)a0;
- (id)readChannelForEntry:(id)a0;
- (id)containedZipArchiveForEntry:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
