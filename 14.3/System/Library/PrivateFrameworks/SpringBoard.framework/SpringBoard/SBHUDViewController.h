@class _UIBackdropView, UIImageView, UIImage, UIView, NSString;

@interface SBHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling>

@property (readonly, nonatomic) UIView *hudView;
@property (readonly, nonatomic) UIView *blockView;
@property (readonly, nonatomic) _UIBackdropView *backdropView;
@property (readonly, nonatomic) UIImageView *backdropMaskImageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showsProgress;
@property (nonatomic) double progress;
@property (nonatomic) double visibilityProgress;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)progressIndicatorStep;

- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_rotateToInterfaceOrientation:(long long)a0;
- (void)_updateBlockView;
- (void)_updateBackdropMask;
- (BOOL)displaysLabel;
- (id)_blockColorForValue:(float)a0;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;

@end
