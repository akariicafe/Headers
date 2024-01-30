@class OADColorMap, OADColorContext, OADFontScheme, OADColorScheme, OADStyleMatrix;
@protocol OADColorPalette;

@interface OADDrawingTheme : NSObject

@property (readonly, nonatomic) OADStyleMatrix *styleMatrix;
@property (readonly, nonatomic) OADFontScheme *fontScheme;
@property (readonly, nonatomic) OADColorContext *colorContext;
@property (readonly, nonatomic) OADColorScheme *colorScheme;
@property (readonly, nonatomic) OADColorMap *colorMap;
@property (readonly, nonatomic) id<OADColorPalette> colorPalette;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)applyThemeOverrides:(id)a0 colorMapOverride:(id)a1;
- (id)initWithStyleMatrix:(id)a0 fontScheme:(id)a1 colorScheme:(id)a2 colorMap:(id)a3 colorPalette:(id)a4;
- (id)initWithTheme:(id)a0 colorMap:(id)a1 colorPalette:(id)a2;

@end
