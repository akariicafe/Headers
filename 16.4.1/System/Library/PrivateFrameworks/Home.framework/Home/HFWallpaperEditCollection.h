@class HFWallpaper, UIImage;

@interface HFWallpaperEditCollection : NSObject

@property (readonly, nonatomic) HFWallpaper *wallpaper;
@property (readonly, nonatomic) UIImage *originalImage;
@property (readonly, nonatomic) UIImage *processedImage;

- (id)description;
- (void).cxx_destruct;
- (id)initWithWallpaper:(id)a0 originalImage:(id)a1 processedImage:(id)a2;

@end
