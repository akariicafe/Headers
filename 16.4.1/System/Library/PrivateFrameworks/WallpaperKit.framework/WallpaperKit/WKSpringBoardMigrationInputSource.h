@class NSMutableDictionary;

@interface WKSpringBoardMigrationInputSource : NSObject <WKWallpaperInputSource>

@property (retain, nonatomic) NSMutableDictionary *_wallpaperBokehVariantLookup;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperColorLookup;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperOriginalImageLookup;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperImageLookup;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperOriginalVideoURLLookup;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperVideoURLLookup;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperOptionsLookup;
@property (readonly, nonatomic) unsigned long long lockScreenWallpaperType;
@property (readonly, nonatomic) unsigned long long homeScreenWallpaperType;
@property (readonly, nonatomic) BOOL homeScreenMirrorsLockScreen;
@property (readonly, nonatomic, getter=isLockScreenIsAppearanceAware) BOOL lockScreenIsAppearanceAware;
@property (readonly, nonatomic, getter=isLockScreenIsSystemContent) BOOL lockScreenIsSystemContent;
@property (readonly, nonatomic, getter=isHomeScreenIsAppearanceAware) BOOL homeScreenIsAppearanceAware;
@property (readonly, nonatomic, getter=isHomeScreenIsSystemContent) BOOL homeScreenIsSystemContent;

- (id)initWithConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAppearanceAwareWallpaperAtLocation:(id)a0 withConfigurationManager:(id)a1;
- (BOOL)_isWallpaperConfigurationAppleSystemContent:(id)a0;
- (void)_populateMigrationInputWithConfigurationManager:(id)a0;
- (id)bokehVariantForLocation:(id)a0;
- (BOOL)isAppearanceWallpaperAtLocation:(id)a0;
- (id)wallpaperColorForLocation:(id)a0;
- (id)wallpaperImageForLocation:(id)a0 wallpaperAppearance:(id)a1;
- (id)wallpaperOptionsForLocation:(id)a0 wallpaperAppearance:(id)a1;
- (id)wallpaperOriginalImageForLocation:(id)a0 wallpaperAppearance:(id)a1;
- (id)wallpaperOriginalVideoURLForLocation:(id)a0 wallpaperAppearance:(id)a1;
- (unsigned long long)wallpaperTypeForLocation:(id)a0;
- (id)wallpaperVideoURLForLocation:(id)a0 wallpaperAppearance:(id)a1;

@end
