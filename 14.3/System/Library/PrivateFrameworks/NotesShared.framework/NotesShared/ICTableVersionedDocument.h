@class ICTable, NSUUID, CRDocument;

@interface ICTableVersionedDocument : TTVersionedDocument

@property (retain, nonatomic) ICTable *table;
@property (readonly) CRDocument *innerTableDocument;
@property (readonly, nonatomic) NSUUID *replica;

+ (id)tableDoc;
+ (unsigned int)minimumSupportedVersion;
+ (id)tableDocWithColumnCount:(unsigned long long)a0 rowCount:(unsigned long long)a1;
+ (unsigned int)serializationVersion;

- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void).cxx_destruct;
- (void)setReplica:(id)a0;
- (unsigned long long)mergeWithTableVersionedDocument:(id)a0;

@end
