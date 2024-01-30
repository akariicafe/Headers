@class UIView, NSString, UIImage, UIImageView, UIButton, HFWallpaper, UIVisualEffectView, UIScrollView;
@protocol HUWallpaperEditingViewControllerDelegate;

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic) BOOL statusBarHidden;
@property (retain, nonatomic) HFWallpaper *wallpaper;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *buttonSeparatorView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *setButton;
@property (retain, nonatomic) UIVisualEffectView *buttonBackgroundView;
@property (weak, nonatomic) id<HUWallpaperEditingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarUpdateAnimation;
- (void)buttonPressed:(id)a0;
- (id)_createButtonViews;
- (id)_createButtonConstraints;
- (void)updateScrollViewScale;
- (id)transparentButtonWithTitle:(id)a0;
- (void)buttonTouchStarted:(id)a0;
- (void)buttonTouchFinished:(id)a0;
- (id)initWithWallpaper:(id)a0 image:(id)a1 delegate:(id)a2;

@end
