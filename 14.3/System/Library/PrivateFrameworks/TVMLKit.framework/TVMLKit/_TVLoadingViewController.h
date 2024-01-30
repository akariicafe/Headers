@class IKViewElement, IKImageElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    double _spinnerDelay;
}

- (long long)_blurEffectStyle;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateWithViewElement:(id)a0;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (void)updateWithLoadingTemplate:(id)a0;
- (id)_backgroundImageProxy;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)setSpinnerDelay:(double)a0;

@end
