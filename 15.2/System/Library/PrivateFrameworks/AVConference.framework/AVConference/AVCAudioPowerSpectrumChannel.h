@class NSMutableArray;

@interface AVCAudioPowerSpectrumChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *bins;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x0; float x1; } x0; float x1; } *)a0 binCount:(unsigned int)a1;

@end
