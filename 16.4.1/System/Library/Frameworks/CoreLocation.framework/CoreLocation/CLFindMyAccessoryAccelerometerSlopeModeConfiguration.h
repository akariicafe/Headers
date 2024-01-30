@interface CLFindMyAccessoryAccelerometerSlopeModeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) unsigned char minimumSampleCount;
@property (class, readonly) unsigned char maximumSampleCount;
@property (class, readonly) float minimumThreshold;
@property (class, readonly) float maximumThreshold;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float threshold;
@property (nonatomic) unsigned char sampleCount;
@property (nonatomic) unsigned char sampleRate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithThreshold:(float)a0 sampleCount:(unsigned char)a1 sampleRate:(unsigned char)a2;

@end
