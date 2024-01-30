@class PUMediaProvider, UIWindow;

@interface PUContentTileProvider : NSObject

@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) UIWindow *window;

- (id)initWithMediaProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)tileControllerForAsset:(id)a0 viewModel:(id)a1 tilingView:(id)a2;
- (void)registerTileControllerClassesWithTilingView:(id)a0;

@end
