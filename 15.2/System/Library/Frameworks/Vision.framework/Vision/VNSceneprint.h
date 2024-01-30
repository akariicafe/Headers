@class NSDictionary;

@interface VNSceneprint : VNEspressoModelImageprint

@property (readonly, copy) NSDictionary *labelsAndConfidence;

+ (id)currentVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)serializedLength;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;

@end
