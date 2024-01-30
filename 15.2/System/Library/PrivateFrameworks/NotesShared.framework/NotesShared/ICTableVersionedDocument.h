@class ICTable, CRDocument;

@interface ICTableVersionedDocument : TTVersionedDocument

@property (retain, nonatomic) ICTable *table;
@property (readonly) CRDocument *innerTableDocument;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (id)initWithColumnCount:(unsigned long long)a0 rowCount:(unsigned long long)a1 replicaID:(id)a2;
- (unsigned long long)mergeWithTableVersionedDocument:(id)a0;

@end
