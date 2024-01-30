@class ICTable, ICCRDocument;

@interface ICTableVersionedDocument : TTVersionedDocument

@property (retain, nonatomic) ICTable *table;
@property (readonly) ICCRDocument *innerTableDocument;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)initWithColumnCount:(unsigned long long)a0 rowCount:(unsigned long long)a1 replicaID:(id)a2;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (unsigned long long)mergeWithTableVersionedDocument:(id)a0;

@end
