@interface AXLogColorizer : NSObject

@property (nonatomic, getter=isManagedBySettings) BOOL managedBySettings;
@property (nonatomic) struct AXLogColorTheme { long long errorColor; long long warningColor; long long infoColor; long long debugColor; } colorTheme;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL preferDarkColors;

+ (struct AXLogColorTheme { long long x0; long long x1; long long x2; long long x3; })defaultDarkColorsTheme;
+ (struct AXLogColorTheme { long long x0; long long x1; long long x2; long long x3; })defaultLightColorsTheme;
+ (id)coloredString:(id)a0 withColor:(long long)a1;
+ (id)defaultColorizer;
+ (char *)ansiColorSeqForAXLogColor:(long long)a0;
+ (id)colorizeStringIfEnabled:(id)a0 withColor:(long long)a1;

- (id)magentaString:(id)a0;
- (id)cyanString:(id)a0;
- (id)infoString:(id)a0;
- (id)errorString:(id)a0;
- (void)_updateSettingsFromUserPrefs;
- (id)warningString:(id)a0;
- (id)_initAndManageWithSettings:(BOOL)a0;
- (id)redString:(id)a0;
- (id)greyString:(id)a0;
- (id)init;
- (id)debugString:(id)a0;
- (id)greenString:(id)a0;
- (id)description;
- (id)blueString:(id)a0;
- (id)yellowString:(id)a0;
- (id)whiteOrBlackString:(id)a0;

@end
