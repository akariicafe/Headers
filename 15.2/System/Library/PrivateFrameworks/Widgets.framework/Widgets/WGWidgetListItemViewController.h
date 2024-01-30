@class NSString, WGWidgetHostingViewController, WGWidgetPlatterView;
@protocol WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate;

@interface WGWidgetListItemViewController : UIViewController <PLContentSizeCategoryAdjusting>

@property (nonatomic, getter=_pendingSize, setter=_setPendingSize:) struct CGSize { double width; double height; } pendingSize;
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;
@property (weak, nonatomic) id<WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate> delegate;
@property (readonly, nonatomic) WGWidgetPlatterView *platterView;
@property (readonly, nonatomic) WGWidgetHostingViewController *widgetHost;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeChildViewController:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_platterViewIfLoaded;
- (id)_platterViewLoadingIfNecessary:(BOOL)a0;
- (id)initWithWidgetIdentifier:(id)a0;
- (void)managingContainerWillAppear:(id)a0;
- (void)managingContainerDidDisappear:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeForPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeForContentOfSize:(struct CGSize { double x0; double x1; })a0;
- (void)_addWidgetHostIfNecessary;

@end
