@class VNRequestSpecifier, NSString, NSDictionary, NSData;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    unsigned long long _elementType;
    unsigned long long _serializationOptions;
}

@property (class, readonly) unsigned int currentCodingVersion;
@property (class, readonly, copy) NSDictionary *codingTypesToCodingKeys;
@property (class, readonly) unsigned long long serializationMagicNumber;
@property (class, readonly) unsigned long long currentSerializationVersion;
@property (class, readonly) NSString *currentVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *descriptorData;
@property (readonly) unsigned long long elementCount;
@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long lengthInBytes;
@property (readonly, nonatomic) unsigned long long confidenceScoreType;
@property (readonly) NSString *version;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;
+ (id)originatingRequestSpecifierForRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)printWithDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 originatingRequestSpecifier:(id)a3 error:(id *)a4;
+ (id)printWithFloat16PrecisionFloat32Data:(id)a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;
+ (id)printWithFloat16PrecisionFloat32Values:(const float *)a0 elementCount:(unsigned long long)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (BOOL)validateDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)serializeStateAndReturnError:(id *)a0;
- (id)initWithCoder:(id)a0 forCodingVersion:(unsigned int)a1;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)_VNEspressoModelImageprintSerializedLength;
- (id)_initWithClassKeyMappedCoder:(id)a0;
- (id)computeDistance:(id)a0 withDistanceFunction:(unsigned long long)a1 error:(id *)a2;
- (BOOL)hasEquivalentDescriptorToImageprint:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 requestRevision:(unsigned long long)a4;
- (id)initWithDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 originatingRequestSpecifier:(id)a3;
- (BOOL)isPrint:(id)a0 compatibleWithOtherPrint:(id)a1 error:(id *)a2;
- (id)labelsAndConfidence;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
