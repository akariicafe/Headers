@interface AXLogColorizer : NSObject

@property (nonatomic, getter=isManagedBySettings) BOOL managedBySettings;
@property (nonatomic) struct AXLogColorTheme { long long errorColor; long long warningColor; long long infoColor; long long debugColor; } colorTheme;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL preferDarkColors;

+ (id)defaultColorizer;
+ (struct AXLogColorTheme { long long x0; long long x1; long long x2; long long x3; })defaultDarkColorsTheme;
+ (id)colorizeStringIfEnabled:(id)a0 withColor:(long long)a1;
+ (id)coloredString:(id)a0 withColor:(long long)a1;
+ (char *)ansiColorSeqForAXLogColor:(long long)a0;
+ (struct AXLogColorTheme { long long x0; long long x1; long long x2; long long x3; })defaultLightColorsTheme;

- (id)errorString:(id)a0;
- (id)cyanString:(id)a0;
- (id)_initAndManageWithSettings:(BOOL)a0;
- (id)yellowString:(id)a0;
- (id)init;
- (id)infoString:(id)a0;
- (id)whiteOrBlackString:(id)a0;
- (id)debugString:(id)a0;
- (id)blueString:(id)a0;
- (id)description;
- (id)greenString:(id)a0;
- (id)warningString:(id)a0;
- (id)greyString:(id)a0;
- (id)redString:(id)a0;
- (void)_updateSettingsFromUserPrefs;
- (id)magentaString:(id)a0;

@end
