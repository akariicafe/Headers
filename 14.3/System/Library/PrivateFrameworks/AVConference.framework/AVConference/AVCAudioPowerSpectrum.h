@class NSMutableArray;

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *channels;
@property (readonly, nonatomic) float minFrequency;
@property (readonly, nonatomic) float maxFrequency;
@property (readonly, nonatomic) long long sourceType;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)checkNumChannels:(unsigned short)a0;
- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x0; float x1; } x0; float x1; } *)a0 binCount:(unsigned int)a1 channelID:(unsigned short)a2;

@end
