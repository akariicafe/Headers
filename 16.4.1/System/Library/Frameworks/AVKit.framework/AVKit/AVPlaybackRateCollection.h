@class NSArray, AVPlaybackRate;

@interface AVPlaybackRateCollection : AVPlaybackSpeedCollection

@property (readonly, nonatomic) NSArray *rates;
@property (readonly, nonatomic) AVPlaybackRate *selectedRate;

+ (id)collectionWithDefaultRates;
+ (id)collectionWithRates:(id)a0;

- (void)setSelectedRate:(id)a0;
- (void)selectNextPlaybackRate:(id)a0;

@end
