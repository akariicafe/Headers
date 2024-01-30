@class NSUUID, CROrderedSet, CRDocument;

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument

@property (retain, nonatomic) CROrderedSet *orderedSet;
@property (readonly) CRDocument *document;
@property (readonly, nonatomic) NSUUID *replica;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void).cxx_destruct;
- (unsigned long long)mergeWithIdentifierOrderedSetVersionedDocument:(id)a0;

@end
