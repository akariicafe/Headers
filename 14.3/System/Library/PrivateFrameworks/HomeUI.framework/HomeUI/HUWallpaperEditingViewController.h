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
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)buttonPressed:(id)a0;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillAppear:(BOOL)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (id)_createButtonViews;
- (id)_createButtonConstraints;
- (void)updateScrollViewScale;
- (id)transparentButtonWithTitle:(id)a0;
- (void)buttonTouchStarted:(id)a0;
- (void)buttonTouchFinished:(id)a0;
- (id)initWithWallpaper:(id)a0 image:(id)a1 delegate:(id)a2;

@end
