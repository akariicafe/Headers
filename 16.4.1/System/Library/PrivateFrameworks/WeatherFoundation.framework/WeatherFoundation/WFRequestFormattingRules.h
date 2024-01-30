@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject

@property (readonly, nonatomic) id<WFSettings> settings;

+ (BOOL)aqiEnabledByRules:(id)a0 forLocation:(id)a1;

- (id)initWithSettings:(id)a0;
- (BOOL)aqiEnabledForCountryCode:(id)a0;
- (long long)locationNumDecimalsOfPrecision;
- (void).cxx_destruct;

@end
