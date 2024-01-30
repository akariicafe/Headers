@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint

@property (readonly) unsigned long long imageSignatureprintType;

+ (id)currentVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)_signaturePrintTypeSupported:(unsigned long long)a0;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)serializedLength;
- (id)initWithState:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 imageSignatureprintType:(unsigned long long)a4 originatingRequestSpecifier:(id)a5;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 imageSignatureprintType:(unsigned long long)a4 requestRevision:(unsigned long long)a5;
- (unsigned long long)hash;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
