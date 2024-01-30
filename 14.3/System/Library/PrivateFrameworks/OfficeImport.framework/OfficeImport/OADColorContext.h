@class OADColorMap, OADColorScheme;
@protocol OADColorPalette;

@interface OADColorContext : NSObject

@property (readonly, nonatomic) OADColorScheme *scheme;
@property (readonly, nonatomic) OADColorMap *map;
@property (retain, nonatomic) id<OADColorPalette> palette;

+ (id)colorContextWithScheme:(id)a0 map:(id)a1 palette:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithScheme:(id)a0 map:(id)a1 palette:(id)a2;
- (void)applyThemeOverrides:(id)a0 colorMapOverride:(id)a1;

@end
