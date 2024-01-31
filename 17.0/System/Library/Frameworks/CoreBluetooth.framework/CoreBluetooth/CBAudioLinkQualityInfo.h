@class NSString;

@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int bitRate;
@property (nonatomic) char codecType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) double jitterBufferSeconds;
@property (nonatomic) char noiseFloor90;
@property (nonatomic) double retransmitRate;
@property (nonatomic) char rssiAverage;
@property (nonatomic) char signalToNoiseRatio;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;

@end
