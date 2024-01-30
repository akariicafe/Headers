@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject

@property (readonly, nonatomic) id<WFSettings> settings;

+ (BOOL)aqiEnabledByRules:(id)a0 forLocation:(id)a1;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (long long)locationNumDecimalsOfPrecision;
- (BOOL)aqiEnabledForCountryCode:(id)a0;

@end
