@class IKViewElement, IKImageElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    double _spinnerDelay;
}

- (long long)_blurEffectStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateWithViewElement:(id)a0;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (void)updateWithLoadingTemplate:(id)a0;
- (id)_backgroundImageProxy;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)setSpinnerDelay:(double)a0;

@end
