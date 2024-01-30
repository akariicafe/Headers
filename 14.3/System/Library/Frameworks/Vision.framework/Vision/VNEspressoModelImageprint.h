@class NSDictionary, NSString, NSData;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding>

@property (class, readonly) unsigned int currentCodingVersion;
@property (class, readonly, copy) NSDictionary *codingTypesToCodingKeys;
@property (class, readonly) unsigned long long serializationMagicNumber;
@property (class, readonly) unsigned long long currentSerializationVersion;
@property (class, readonly) NSString *currentVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestRevision;
@property (retain) NSData *descriptorData;
@property unsigned long long elementCount;
@property unsigned long long elementType;
@property unsigned long long lengthInBytes;
@property long long distanceMode;
@property (copy) NSDictionary *labelsAndConfidence;
@property (nonatomic) unsigned long long confidenceScoreType;
@property (copy) NSString *version;
@property (readonly, nonatomic) unsigned long long serializedLength;

+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithClassKeyMappedCoder:(id)a0;
- (id)initWithCoder:(id)a0 forCodingVersion:(unsigned int)a1;
- (unsigned long long)_VNEspressoModelImageprintSerializedLength;
- (BOOL)hasEquivalentDescriptorToImageprint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (id)computeDistance:(id)a0 withDistanceFunction:(unsigned long long)a1 error:(id *)a2;
- (id)serializeStateAndReturnError:(id *)a0;
- (void)encodeWithCoder:(id)a0;

@end
