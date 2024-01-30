@interface CompassBearingComplicationDataSource : NanoCompassBaseComplicationDataSource

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)complicationNameLocalizationKey;
+ (id)appNameLocalizationKey;
+ (id)bundleIdentifierSuffix;

- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (id)_templateNoData:(BOOL)a0 calibrated:(BOOL)a1 heading:(id)a2 bearing:(id)a3;
- (id)newTemplate;
- (id)noDataTemplate;
- (id)randomizedTemplate;

@end
