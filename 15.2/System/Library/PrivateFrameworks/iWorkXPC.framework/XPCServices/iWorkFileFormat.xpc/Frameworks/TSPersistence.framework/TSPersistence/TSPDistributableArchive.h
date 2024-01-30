@class SFUMemoryDataRepresentation, SFUZipEntry, SFUFileDataRepresentation;

@interface TSPDistributableArchive : NSObject {
    void *_entries;
    SFUFileDataRepresentation *_archiveFileRep;
    SFUMemoryDataRepresentation *_archiveMemoryRep;
    SFUZipEntry *_archiveZipEntryRep;
    struct { unsigned long long version; unsigned long long compatibleVersion; } _archivedVersions;
}

+ (BOOL)_checkFileHeader:(const char *)a0 length:(unsigned long long)a1 dffVersion:(unsigned short *)a2 archivedVersions:(struct { unsigned long long x0; unsigned long long x1; } *)a3 defaultObjectVersion:(unsigned int *)a4 hasDescriptors:(BOOL *)a5 hasToc:(BOOL *)a6 otherDataLength:(unsigned int *)a7 closedCleanly:(BOOL *)a8;
+ (id)_newStringFromUtf8DataInStream:(id)a0 length:(unsigned long long)a1;
+ (BOOL)readArchivedVersionsFromStream:(id)a0 versions:(struct { unsigned long long x0; unsigned long long x1; } *)a1 error:(id *)a2;
+ (BOOL)readCheckCrcFromArchiveInputStream:(id)a0 crc:(unsigned int *)a1 error:(id *)a2;
+ (BOOL)streamDistributableArchive:(id)a0 estimatedDataLength:(long long)a1 toUnarchiver:(id)a2 supplementalDataBundle:(id)a3 closedCleanly:(BOOL *)a4 context:(id)a5 error:(id *)a6;
+ (void)cancelStreaming;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_readEntriesFromToc:(id)a0 error:(id *)a1;
- (id)_createInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (id)initWithDffData:(id)a0 error:(id *)a1;
- (struct { unsigned long long x0; unsigned long long x1; })archivedVersions;
- (id)createStreamForObject:(long long)a0 length:(long long *)a1;
- (long long)lengthOfObject:(long long)a0;
- (BOOL)containsObjectWithIdentifier:(long long)a0;

@end
