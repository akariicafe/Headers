@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float minFrequency;
@property (readonly, nonatomic) float maxFrequency;
@property (readonly, nonatomic) float powerLevel;

- (id)initWithCoder:(id)a0;
- (void)assign:(const struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x0; float x1; } x0; float x1; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
