@interface PKVersionedDocument : NSObject

@property (nonatomic) void *documentArchive;
@property (readonly, nonatomic) unsigned long long futureVersionCount;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (id)serialize;
- (id)initWithData:(id)a0;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (void)dealloc;
- (void)loadArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (BOOL)loadData:(id)a0;
- (BOOL)loadDocumentArchive:(void *)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void)saveCurrentVersion:(void *)a0;
- (unsigned long long)mergeWithVersionedDocument:(id)a0;
- (unsigned int)maxDocumentVersion;
- (id)initWithUnzippedData:(id)a0;
- (BOOL)loadUnzippedData:(id)a0;

@end
