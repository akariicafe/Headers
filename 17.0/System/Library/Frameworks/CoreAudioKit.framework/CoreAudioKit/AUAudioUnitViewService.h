@class AURemoteExtensionContext, UIViewController;

@interface AUAudioUnitViewService : UIViewController {
    UIViewController *_auViewController;
}

@property AURemoteExtensionContext *auRemoteExtensionContext;

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)connectChildView;
- (struct CGSize { double x0; double x1; })determineViewSize:(id)a0;
- (void)initializeBlankView;
- (void)markViewForRedraw:(id)a0;
- (void)resizeWindow:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setAUContainerViewConstraints:(id)a0 childView:(id)a1 auViewSize:(struct CGSize { double x0; double x1; })a2;

@end
