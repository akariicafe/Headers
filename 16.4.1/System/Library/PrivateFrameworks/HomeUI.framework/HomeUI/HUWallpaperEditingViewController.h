@class UIView, _TtC6HomeUI12HUBlurButton, UIImage, NSArray, NSString, UIImageView, UIButton, HFWallpaper, UIVisualEffectView, UIScrollView;
@protocol HUWallpaperEditingViewControllerDelegate;

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) BOOL scrollViewHasBeenLoaded;
@property (retain, nonatomic) HFWallpaper *wallpaper;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *buttonSeparatorView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *setButton;
@property (retain, nonatomic) UIVisualEffectView *buttonBackgroundView;
@property (retain, nonatomic) _TtC6HomeUI12HUBlurButton *blurButton;
@property (retain, nonatomic) NSArray *layerFilters;
@property (weak, nonatomic) id<HUWallpaperEditingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)buttonPressed:(id)a0;
- (id)_convertDefaultBlurImage:(id)a0 toScale:(double)a1;
- (id)_createButtonConstraints;
- (id)_createButtonViews;
- (id)_croppedWallpaperInfo;
- (void)_refreshBlurButton;
- (id)_screenScaleAdjustedImage:(id)a0;
- (void)blurButtonPressed:(id)a0;
- (void)buttonTouchFinished:(id)a0;
- (void)buttonTouchStarted:(id)a0;
- (id)initWithWallpaper:(id)a0 image:(id)a1 delegate:(id)a2;
- (id)transparentButtonWithTitle:(id)a0;
- (void)updateScrollViewScale;

@end
