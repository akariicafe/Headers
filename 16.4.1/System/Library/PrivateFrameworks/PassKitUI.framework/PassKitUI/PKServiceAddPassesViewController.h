@class NSString, PKAddPassesCardStackViewController, PKIssuerBindingViewController;
@protocol PKServiceAddPassesViewControllerResultsDelegate;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKIssuerBindingViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {
    struct CGSize { double width; double height; } _screenSize;
    double _screenScale;
    BOOL _placeholderViewControllerDidCancel;
    PKAddPassesCardStackViewController *_cardStackViewController;
    PKIssuerBindingViewController *_issuerBindingViewController;
}

@property (weak, nonatomic) id<PKServiceAddPassesViewControllerResultsDelegate> resultsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)_remoteViewControllerInterface;

- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_dismissDelayed;
- (void)resetBrightness;
- (void)_ingestionDidFinishWithResult:(unsigned long long)a0;
- (void)_setupCardStackViewControllerWithPassDataArray:(id)a0 orPassesContainer:(id)a1 fromPresentationSource:(unsigned long long)a2 shouldPushController:(BOOL)a3;
- (void)_setupIssuerBindingViewControllerWithData:(id)a0 signature:(id)a1;
- (void)addPassesCardStackViewController:(id)a0 didCancelAddingPasses:(id)a1;
- (void)addPassesCardStackViewController:(id)a0 didFinishAddingPasses:(id)a1;
- (void)evaluateBrightness;
- (void)ingestPasses:(id)a0 orPassesContainer:(id)a1 orIssuerData:(id)a2 withSignature:(id)a3 fromPresentationSource:(unsigned long long)a4;
- (void)issuerBindingViewController:(id)a0 didFinishWithPassesData:(id)a1;
- (void)issuerBindingViewControllerDidCancel:(id)a0;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
