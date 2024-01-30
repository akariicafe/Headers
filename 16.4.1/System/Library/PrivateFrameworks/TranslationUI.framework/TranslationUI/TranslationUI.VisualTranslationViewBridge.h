@class UIView;

@interface TranslationUI.VisualTranslationViewBridge : NSObject {
    void /* unknown type, empty encoding */ observable;
    void /* unknown type, empty encoding */ optimizedForExtendedExperience;
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingController;
}

@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, readonly) UIView *view;

+ (void)isTranslatable:(id)a0 completion:(id /* block */)a1;

- (void)setZoomScale:(double)a0;
- (void)dismissErrorUI;
- (void)translate:(id)a0 sourceLocale:(id)a1 targetLocale:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)setPresentationAnchorWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
