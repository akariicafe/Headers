@interface ADFCapSettings : NSObject

@property (nonatomic) long long pageType;
@property (nonatomic) double reverseGeolocationRefreshThresholdInMeters;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxClickCapElements;

- (void)overrideFrequencyCapExpiration:(double)a0;
- (void)overrideClickExpiration:(double)a0;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)a0;
- (void)overrideMaxClickElements:(unsigned long long)a0;
- (id)initWithType:(long long)a0 location:(double)a1 clickExpiration:(double)a2 fCapExpiration:(double)a3 maxFCapElements:(unsigned long long)a4 maxClickCapElements:(unsigned long long)a5;
- (void)overrideRevGeoThreshold:(double)a0;
- (id)_capTypeToString:(long long)a0;

@end
