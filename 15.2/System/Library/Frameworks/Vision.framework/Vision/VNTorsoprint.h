@interface VNTorsoprint : VNEspressoModelImageprint

@property (readonly, nonatomic) float confidence;

+ (id)currentVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)codingTypesToCodingKeys;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (id)emptyTorsoprintDataForRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)serializedLength;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 confidence:(float)a4 requestRevision:(unsigned long long)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 confidence:(float)a4 originatingRequestSpecifier:(id)a5;

@end
