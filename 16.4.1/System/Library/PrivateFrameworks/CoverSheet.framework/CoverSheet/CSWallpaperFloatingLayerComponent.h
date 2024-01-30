@interface CSWallpaperFloatingLayerComponent : CSComponent

@property (nonatomic) BOOL shouldRenderInline;
@property (nonatomic) BOOL shouldRenderForPosterSwitcher;
@property (nonatomic) BOOL shouldMatchMove;

- (id)shouldRenderInline:(BOOL)a0;
- (id)shouldMatchMove:(BOOL)a0;
- (id)shouldRenderForPosterSwitcher:(BOOL)a0;
- (id)init;

@end
