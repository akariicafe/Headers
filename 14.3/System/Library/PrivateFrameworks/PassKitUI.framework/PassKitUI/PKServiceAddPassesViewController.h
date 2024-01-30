@class NSString, PKAddPassesCardStackViewController;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {
    struct CGSize { double width; double height; } _screenSize;
    double _screenScale;
    BOOL _placeholderViewControllerDidCancel;
    PKAddPassesCardStackViewController *_cardStackViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void).cxx_destruct;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)shouldAutorotate;
- (void)resetBrightness;
- (void)evaluateBrightness;
- (void)addPassesCardStackViewController:(id)a0 didFinishAddingPasses:(id)a1;
- (void)addPassesCardStackViewController:(id)a0 didCancelAddingPasses:(id)a1;
- (void)ingestPassesWithData:(id)a0 fromPresentationSource:(unsigned long long)a1;
- (unsigned long long)supportedInterfaceOrientations;

@end
