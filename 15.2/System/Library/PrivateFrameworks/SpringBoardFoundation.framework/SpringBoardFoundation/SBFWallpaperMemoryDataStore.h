@class NSString, NSMutableDictionary;

@interface SBFWallpaperMemoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding> {
    NSMutableDictionary *_images;
    NSMutableDictionary *_originalImages;
    NSMutableDictionary *_thumbnails;
    NSMutableDictionary *_hashes;
    NSMutableDictionary *_proceduralInfo;
    NSMutableDictionary *_videoURLs;
    NSMutableDictionary *_originalVideoURLs;
    NSMutableDictionary *_wallpaperOptions;
    NSMutableDictionary *_colors;
    NSMutableDictionary *_colorNames;
    NSMutableDictionary *_gradients;
}

@property (readonly, nonatomic) unsigned long long numberOfStoredImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWallpaperImageDataTypes:(unsigned long long)a0 forVariants:(long long)a1;
- (BOOL)setWallpaperThumbnailData:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeWallpaperGradientForVariants:(long long)a0;
- (void)removeWallpaperColorForVariants:(long long)a0;
- (id)wallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperImageHashDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperOriginalImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperGradient:(id)a0 forVariants:(long long)a1;
- (BOOL)setVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)hasWallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setOriginalVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setProceduralWallpaperInfo:(id)a0 forVariants:(long long)a1;
- (BOOL)setWallpaperOptions:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeProceduralWallpaperForVariants:(long long)a0;
- (id)proceduralWallpaperInfoForVariant:(long long)a0;
- (BOOL)setWallpaperImageHashData:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)removeWallpaperImageHashDataForVariants:(long long)a0;
- (BOOL)setWallpaperColor:(id)a0 forVariants:(long long)a1;
- (void)removeWallpaperOptionsForVariants:(long long)a0;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (id)verifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)moveWallpaperImageDataTypes:(unsigned long long)a0 fromVariant:(long long)a1 toVariant:(long long)a2;
- (id)succinctDescription;
- (BOOL)setWallpaperOriginalImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)unverifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)wallpaperColorForVariant:(long long)a0;
- (id)succinctDescriptionBuilder;
- (id)wallpaperThumbnailDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperGradientForVariant:(long long)a0;
- (id)verifiedOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)removeVideoForVariant:(long long)a0;

@end
