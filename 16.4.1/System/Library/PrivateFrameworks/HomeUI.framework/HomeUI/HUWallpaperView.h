@class HFWallpaper, UIImage, CAGradientLayer;
@protocol HFHomeKitObject, HMApplicationData;

@interface HUWallpaperView : UIImageView

@property (retain, nonatomic) HFWallpaper *wallpaper;
@property (retain, nonatomic) id<HFHomeKitObject, HMApplicationData> hkObject;
@property (retain, nonatomic) UIImage *currentImage;
@property (retain, nonatomic) CAGradientLayer *currentLayer;
@property (nonatomic) BOOL disableWallpaperUpdate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)populateWallpaper:(id)a0 withAnimation:(BOOL)a1 onlyIfNeeded:(BOOL)a2;
- (id)refreshWallpaperForHomeKitObject:(id)a0 withAnimation:(BOOL)a1;
- (void)setCurrentImage:(id)a0 withAnimation:(BOOL)a1;
- (void)setCurrentLayer:(id)a0 withAnimation:(BOOL)a1;

@end
