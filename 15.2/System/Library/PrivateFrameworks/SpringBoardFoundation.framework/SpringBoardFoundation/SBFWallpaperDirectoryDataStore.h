@class NSURL, NSDictionary, NSString;

@interface SBFWallpaperDirectoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding>

@property (class, readonly, copy, nonatomic) NSURL *defaultDirectoryURL;

@property (readonly, copy, nonatomic) NSDictionary *directoryCreationAttributes;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (nonatomic) BOOL supportsWallpaperOptions;
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
- (id)wallpaperVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)succinctDescription;
- (id)wallpaperOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperOriginalImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void)createDirectory;
- (void)didWriteFileToURL:(id)a0;
- (id)unverifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void).cxx_destruct;
- (id)wallpaperOriginalImageURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperOptionsURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)wallpaperColorForVariant:(long long)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)copyVideoAtURL:(id)a0 toURL:(id)a1;
- (id)wallpaperThumbnailDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperGradientForVariant:(long long)a0;
- (id)verifiedOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperThumbnailURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperImageURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)initWithDirectoryURL:(id)a0;
- (void)removeVideoForVariant:(long long)a0;

@end
