@class VNRequestSpecifier, NSString, NSDictionary, NSData;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    unsigned long long _elementType;
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
@property (readonly, copy) NSDictionary *labelsAndConfidence;
@property (readonly, nonatomic) unsigned long long confidenceScoreType;
@property (readonly) NSString *version;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;
+ (id)originatingRequestSpecifierForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (id)computeDistance:(id)a0 withDistanceFunction:(unsigned long long)a1 error:(id *)a2;
- (id)serializeStateAndReturnError:(id *)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 requestRevision:(unsigned long long)a4;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 originatingRequestSpecifier:(id)a4;
- (id)_initWithClassKeyMappedCoder:(id)a0;
- (id)initWithCoder:(id)a0 forCodingVersion:(unsigned int)a1;
- (unsigned long long)_VNEspressoModelImageprintSerializedLength;
- (BOOL)hasEquivalentDescriptorToImageprint:(id)a0;

@end
