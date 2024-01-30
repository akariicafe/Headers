@class NSString, UIColor, NSArray;

@interface AirQualityIndexModel : NSObject

@property (readonly, nonatomic) double fraction;
@property (readonly, nonatomic) NSString *localizedIndex;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) NSArray *spectrum;
@property (readonly, nonatomic) NSArray *spectrumTicks;

+ (id)airQualityIndexModelForConditions:(id)a0 location:(id)a1 indexNumberFormatter:(id)a2 useRoundedVariant:(BOOL)a3;

- (void).cxx_destruct;
- (void)logSpectrum;

@end
