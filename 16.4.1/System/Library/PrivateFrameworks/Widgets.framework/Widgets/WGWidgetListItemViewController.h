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
- (void)removeChildViewController:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_platterViewLoadingIfNecessary:(BOOL)a0;
- (void)_addWidgetHostIfNecessary;
- (id)_platterViewIfLoaded;
- (struct CGSize { double x0; double x1; })contentSizeForPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithWidgetIdentifier:(id)a0;
- (void)managingContainerDidDisappear:(id)a0;
- (void)managingContainerWillAppear:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeForContentOfSize:(struct CGSize { double x0; double x1; })a0;

@end
