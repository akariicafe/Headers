@interface SBSWallpaperClient : FBSServiceFacilityClient

- (BOOL)setWallpaperGradient:(id)a0 forVariants:(unsigned long long)a1;
- (void)fetchContentCutoutBoundsForVariant:(unsigned int)a0 orientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (id)initWithCalloutQueue:(id)a0;
- (void)fetchThumbnailForVariant:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)fetchOriginalVideoURLForVariant:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)fetchOriginalImageForVariant:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(unsigned long long)a1;
- (BOOL)setWallpaperWithVideoWithWallpaperMode:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 wallpaperMode:(unsigned char)a2;
- (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forVariants:(unsigned long long)a2;
- (void)restoreDefaultWallpaperWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 calloutQueue:(id)a1;

@end
