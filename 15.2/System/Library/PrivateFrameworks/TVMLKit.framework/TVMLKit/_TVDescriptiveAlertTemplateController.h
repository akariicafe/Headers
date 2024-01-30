@class UIColor, NSArray, IKViewElement, IKImageElement, UIView;

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {
    IKViewElement *_templateElement;
    NSArray *_templateSubviews;
    NSArray *_templateSubcontrollers;
    UIView *_preferredFocusView;
    UIColor *_backgroundColor;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
}

- (long long)_blurEffectStyle;
- (void)loadView;
- (void).cxx_destruct;
- (void)updateWithViewElement:(id)a0;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)_normalizeButtonsInViews:(id)a0;

@end
