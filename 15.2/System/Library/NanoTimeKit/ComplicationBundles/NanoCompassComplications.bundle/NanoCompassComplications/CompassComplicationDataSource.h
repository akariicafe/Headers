@interface CompassComplicationDataSource : NanoCompassBaseComplicationDataSource

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)appNameLocalizationKey;
+ (id)complicationNameLocalizationKey;
+ (id)bundleIdentifierSuffix;

- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (id)newTemplate;
- (id)noDataTemplate;
- (id)randomizedTemplate;
- (id)_templateNoData:(BOOL)a0 calibrated:(BOOL)a1 heading:(id)a2;

@end
