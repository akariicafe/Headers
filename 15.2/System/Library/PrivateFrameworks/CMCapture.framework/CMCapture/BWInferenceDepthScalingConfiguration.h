@class NSNumber;

@interface BWInferenceDepthScalingConfiguration : NSObject

@property (readonly, nonatomic) BOOL flipX;
@property (readonly, nonatomic) NSNumber *NANValue;
@property (readonly, nonatomic) NSNumber *clampMin;
@property (readonly, nonatomic) NSNumber *clampMax;
@property (readonly, nonatomic) BOOL allowUpsampling;
@property (readonly, nonatomic) unsigned long long concurrencyWidth;

- (void)dealloc;
- (id)initWithflipX:(BOOL)a0 clampMin:(id)a1 clampMax:(id)a2 NANValue:(id)a3 allowUpsampling:(BOOL)a4 concurrencyWidth:(unsigned long long)a5;

@end
