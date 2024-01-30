@class SBWallpaperDefaults, NSString, SBFWallpaperDefaults;

@interface SBFWallpaperUserDefaultsDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding>

@property (readonly, nonatomic) SBFWallpaperDefaults *wallpaperOptionsDefaults;
@property (readonly, nonatomic) SBWallpaperDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWallpaperColorForVariants:(long long)a0;
- (void)removeWallpaperOptionsForVariants:(long long)a0;
- (BOOL)hasWallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperThumbnailData:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperOriginalImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperImageHashDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)init;
- (id)wallpaperThumbnailDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void).cxx_destruct;
- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)a0 options:(id)a1 forVariant:(long long)a2;
- (BOOL)setWallpaperGradient:(id)a0 forVariants:(long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperOptions:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (id)succinctDescription;
- (id)wallpaperColorForVariant:(long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeProceduralWallpaperForVariants:(long long)a0;
- (BOOL)setWallpaperImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setOriginalVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)a0 fromVariant:(long long)a1 toVariant:(long long)a2;
- (id)wallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)unverifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (BOOL)setWallpaperImageHashData:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (id)succinctDescriptionBuilder;
- (BOOL)setProceduralWallpaperInfo:(id)a0 forVariants:(long long)a1;
- (void)removeWallpaperImageHashDataForVariants:(long long)a0;
- (id)proceduralWallpaperInfoForVariant:(long long)a0;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(long long)a1;
- (BOOL)setWallpaperOriginalImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setWallpaperColor:(id)a0 forVariants:(long long)a1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)a0 forVariants:(long long)a1;
- (BOOL)setVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeVideoForVariant:(long long)a0;
- (id)initWithUserDefaults:(id)a0;
- (id)verifiedOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperGradientForVariant:(long long)a0;
- (void)removeWallpaperGradientForVariants:(long long)a0;
- (id)verifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;

@end
