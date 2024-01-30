@class NSString, UIView, IKViewElement;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController> {
    id _imageProxy;
    BOOL _loaded;
    UIView *_rightLargeTitleButton;
    struct { BOOL respondsToBackroundImageProxy; BOOL respondsToBackgroundImageRequiresBlur; BOOL respondsToBackdropNeeded; BOOL respondsToImageProxySize; BOOL respondsToBlurEffectStyle; BOOL respondsToPurgeBgImages; BOOL respondsToConfigureBgImageBackdropImage; BOOL respondsToShouldLoadBackgroundImageAsynchronously; } _bgImageLoadingOptions;
}

@property (retain, nonatomic) IKViewElement *navigationItemElement;
@property (nonatomic) BOOL appliedNavigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_decorateImage:(id)a0 decorator:(id)a1;

- (long long)preferredStatusBarStyle;
- (long long)_blurEffectStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateNavigationItem;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_dismissViewController:(id)a0;
- (void)_updateNavigationBarPadding;
- (void)updateNavigationItem:(id)a0;
- (void)updateWithViewElement:(id)a0;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (BOOL)_backgroundImageRequiresBlur;
- (void)loadFromViewController:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isBackdropNeeded;
- (BOOL)_shouldLoadBackgroundImageAsynchronously;
- (void)configureAppearanceTransition;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_reparentNavigationItem:(id)a0;
- (BOOL)_isNewiOSTVApp;
- (id)_stackViewWithMinSpacing:(double)a0 layoutMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
