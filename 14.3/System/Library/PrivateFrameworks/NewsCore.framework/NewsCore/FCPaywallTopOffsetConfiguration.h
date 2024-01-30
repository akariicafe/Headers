@interface FCPaywallTopOffsetConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) double compactPortraitTopOffsetRatio;
@property (readonly, nonatomic) double compactLandscapeTopOffsetRatio;
@property (readonly, nonatomic) double regularPortraitTopOffsetRatio;
@property (readonly, nonatomic) double regularLandscapeTopOffsetRatio;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (id)initWithCompactPortraitTopOffsetRatio:(double)a0 compactLandscapeTopOffsetRatio:(double)a1 regularPortraitTopOffsetRatio:(double)a2 regularLandscapeTopOffsetRatio:(double)a3;

@end
