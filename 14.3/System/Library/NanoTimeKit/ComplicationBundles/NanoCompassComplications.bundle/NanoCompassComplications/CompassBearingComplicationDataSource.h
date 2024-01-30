@interface CompassBearingComplicationDataSource : NanoCompassBaseComplicationDataSource

+ (id)localizedAppName;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)bundleIdentifierSuffix;

- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (id)newTemplate;
- (id)noDataTemplate;
- (id)randomizedTemplate;
- (id)_templateNoData:(BOOL)a0 calibrated:(BOOL)a1 heading:(id)a2 bearing:(id)a3 useAlphaShadows:(BOOL)a4;
- (id)_templateNoData:(BOOL)a0 calibrated:(BOOL)a1 heading:(id)a2 bearing:(id)a3;

@end
