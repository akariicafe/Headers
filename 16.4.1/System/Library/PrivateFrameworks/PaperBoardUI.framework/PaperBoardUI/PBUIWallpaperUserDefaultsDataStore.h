@class PBUIWallpaperDefaultsDomain, NSString, PBUIWallpaperDefaults;

@interface PBUIWallpaperUserDefaultsDataStore : NSObject <PBUIWallpaperDataStore, BSDescriptionProviding>

@property (readonly, nonatomic) PBUIWallpaperDefaults *wallpaperDefaults;
@property (readonly, nonatomic) PBUIWallpaperDefaultsDomain *defaultsDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)a0 options:(id)a1 forVariant:(long long)a2;
- (BOOL)setWallpaperThumbnailData:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)wallpaperImageHashDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)removeWallpaperImageHashDataForVariants:(long long)a0;
- (id)succinctDescriptionBuilder;
- (id)wallpaperThumbnailDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperOptions:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setWallpaperGradient:(id)a0 forVariants:(long long)a1;
- (BOOL)supportsWallpaperImageHashDataStorage;
- (void)removeWallpaperGradientForVariants:(long long)a0;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(long long)a1;
- (void)removeVideoForVariant:(long long)a0;
- (id)wallpaperOriginalImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperImageHashData:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeWallpaperOptionsForVariants:(long long)a0;
- (id)wallpaperGradientForVariant:(long long)a0;
- (id)wallpaperColorForVariant:(long long)a0;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (BOOL)setWallpaperImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)verifiedOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)unverifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)a0 forVariants:(long long)a1;
- (void)removeWallpaperColorForVariants:(long long)a0;
- (id)proceduralWallpaperInfoForVariant:(long long)a0;
- (id)initWithUserdefaultsDomain:(id)a0;
- (id)verifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)removeProceduralWallpaperForVariants:(long long)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)moveWallpaperImageDataTypes:(unsigned long long)a0 fromVariant:(long long)a1 toVariant:(long long)a2;
- (BOOL)setWallpaperColor:(id)a0 forVariants:(long long)a1;
- (BOOL)setProceduralWallpaperInfo:(id)a0 forVariants:(long long)a1;
- (BOOL)setOriginalVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setWallpaperOriginalImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void).cxx_destruct;
- (BOOL)hasWallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;

@end
