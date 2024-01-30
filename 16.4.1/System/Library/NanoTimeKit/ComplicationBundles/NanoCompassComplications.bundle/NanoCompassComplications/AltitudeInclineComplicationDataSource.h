@interface AltitudeInclineComplicationDataSource : NanoCompassBaseComplicationDataSource

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)complicationNameLocalizationKey;
+ (id)appNameLocalizationKey;
+ (id)bundleIdentifierSuffix;

- (id)alwaysOnTemplate;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (id)_templateNoData:(BOOL)a0 noIncline:(BOOL)a1 calibrated:(BOOL)a2 altitude:(id)a3 heading:(id)a4 incline:(id)a5;
- (id)newTemplate;
- (id)noDataTemplate;
- (id)randomizedTemplate;

@end
