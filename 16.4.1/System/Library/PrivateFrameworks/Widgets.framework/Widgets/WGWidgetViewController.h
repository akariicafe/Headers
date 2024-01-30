@class UITraitCollection, NSString, WGWidgetHostingViewController;
@protocol WGWidgetViewControllerDelegate;

@interface WGWidgetViewController : UIViewController <WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost, WGWidgetExtensionVisibilityProviding>

@property (retain, nonatomic) WGWidgetHostingViewController *widgetHost;
@property (weak, nonatomic) id<WGWidgetViewControllerDelegate> delegate;
@property (readonly, nonatomic) UITraitCollection *requestedTraitCollectionOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (long long)largestAvailableDisplayModeForWidget:(id)a0;
- (long long)userSpecifiedDisplayModeForWidget:(id)a0;
- (BOOL)isWidgetExtensionVisible:(id)a0;
- (void)widget:(id)a0 didRemoveSnapshotAtURL:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)_platterViewLoadingIfNecessary:(BOOL)a0;
- (void)registerWidgetForRefreshEvents:(id)a0;
- (void)_addWidgetButtonTapped:(id)a0;
- (id)_platterViewIfLoaded;
- (id)initWithWidgetInfo:(id)a0;
- (struct CGSize { double x0; double x1; })maxSizeForWidget:(id)a0 forDisplayMode:(long long)a1;
- (void)remoteViewControllerDidConnectForWidget:(id)a0;
- (void)remoteViewControllerViewDidAppearForWidget:(id)a0;
- (void)unregisterWidgetForRefreshEvents:(id)a0;

@end
