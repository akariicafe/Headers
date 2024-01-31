@class NSString, AXCCTextSizeHelper, AXCCTextSizeDetailViewController;
@protocol AXCCTextSizeModuleViewControllerDelegate;

@interface AXCCTextSizeModuleViewController : CCUIButtonModuleViewController <CCUITouchContinuationProviding> {
    AXCCTextSizeDetailViewController *_detailController;
}

@property (weak, nonatomic) id<AXCCTextSizeModuleViewControllerDelegate> textSizeDelegate;
@property (retain, nonatomic) AXCCTextSizeHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)providesOwnPlatter;
- (double)preferredExpandedContinuousCornerRadius;
- (void)viewDidLoad;
- (double)preferredExpandedContentHeight;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)preferredExpandedContentWidth;
- (id)viewForTouchContinuation;
- (id)_accessibilityControlCenterButtonIdentifier;
- (id)_accessibilityControlCenterButtonLabel;

@end
