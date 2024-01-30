@class UIImage, AVURLAsset, SBFWallpaperOptions;

@interface WKSystemShellPreviewInput : NSObject

@property (readonly, nonatomic) UIImage *wallpaperImage;
@property (readonly, nonatomic) AVURLAsset *urlAsset;
@property (readonly, nonatomic) SBFWallpaperOptions *wallpaperOptions;

- (void).cxx_destruct;
- (id)initWithWallpaperImage:(id)a0 urlAsset:(id)a1 wallpaperOptions:(id)a2;

@end
