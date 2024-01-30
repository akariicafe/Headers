@class NSString;

@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable>

@property (nonatomic) unsigned int bitRate;
@property (nonatomic) char codecType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) double jitterBufferSeconds;
@property (nonatomic) char noiseFloor90;
@property (nonatomic) double retransmitRate;
@property (nonatomic) char rssiAverage;
@property (nonatomic) char signalToNoiseRatio;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
