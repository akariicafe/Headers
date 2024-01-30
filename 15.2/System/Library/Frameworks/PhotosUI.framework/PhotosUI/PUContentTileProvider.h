@class PUMediaProvider, UIWindow;

@interface PUContentTileProvider : NSObject

@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) UIWindow *window;

- (void)registerTileControllerClassesWithTilingView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaProvider:(id)a0;
- (id)tileControllerForAsset:(id)a0 viewModel:(id)a1 tilingView:(id)a2;

@end
