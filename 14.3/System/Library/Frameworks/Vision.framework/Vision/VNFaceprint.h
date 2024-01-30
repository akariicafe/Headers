@interface VNFaceprint : VNEspressoModelImageprint

@property (readonly, nonatomic) float confidence;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentCodingVersion;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)a0;
+ (id)currentVersion;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)serializedLength;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 confidence:(float)a5 requestRevision:(unsigned long long)a6;
- (void)encodeWithCoder:(id)a0;

@end
