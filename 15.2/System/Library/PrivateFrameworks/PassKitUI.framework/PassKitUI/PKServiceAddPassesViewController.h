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

- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (BOOL)shouldAutorotate;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)resetBrightness;
- (void)evaluateBrightness;
- (void)addPassesCardStackViewController:(id)a0 didFinishAddingPasses:(id)a1;
- (void)addPassesCardStackViewController:(id)a0 didCancelAddingPasses:(id)a1;
- (void)ingestPasses:(id)a0 orPassesContainer:(id)a1 fromPresentationSource:(unsigned long long)a2;

@end
