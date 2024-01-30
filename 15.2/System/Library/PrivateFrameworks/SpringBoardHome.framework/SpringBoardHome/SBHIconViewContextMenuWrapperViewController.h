@class MTMaterialView, NSString, NSArray, UIViewController;

@interface SBHIconViewContextMenuWrapperViewController : UIViewController <WGWidgetViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate> {
    MTMaterialView *_backgroundView;
    NSArray *_layoutConstraints;
}

@property (retain, nonatomic) UIViewController *contentViewController;
@property (copy, nonatomic) NSString *groupNameBase;
@property (nonatomic) double backgroundScale;
@property (nonatomic) double continuousCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)remoteViewControllerDidConnectForWidgetViewController:(id)a0;
- (void).cxx_destruct;
- (void)_applyContinuousCornerRadius;
- (void)_applyPreferredContentSizeChange:(struct CGSize { double x0; double x1; })a0;
- (void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)a0;

@end
