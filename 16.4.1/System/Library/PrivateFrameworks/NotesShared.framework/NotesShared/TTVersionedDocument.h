@class NSUUID;

@interface TTVersionedDocument : NSObject

@property (nonatomic) void *documentArchive;
@property (readonly, nonatomic) NSUUID *replicaID;
@property (readonly, nonatomic) unsigned long long futureVersionCount;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (void)dealloc;
- (id)serialize;
- (void).cxx_destruct;
- (void)loadArchive:(const void *)a0;
- (id)initWithData:(id)a0 replicaID:(id)a1;
- (unsigned int)maxDocumentVersion;
- (void)loadData:(id)a0;
- (void)loadDocumentArchive:(void *)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (unsigned long long)mergeWithVersionedDocument:(id)a0;
- (void)saveCurrentVersion:(void *)a0;
- (void)saveToArchive:(void *)a0;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (id)initWithArchive:(const void *)a0 replicaID:(id)a1;

@end
