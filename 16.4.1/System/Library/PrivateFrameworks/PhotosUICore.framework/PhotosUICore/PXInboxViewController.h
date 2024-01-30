@class PXInboxAggregateDataSource, PXPhotoKitUIMediaProvider, NSString, NSDate, PXInboxAggregateDataSourceManager, PXInboxTableViewCellLayoutCoordinator, UITableView, PXGadgetSpec;
@protocol PXInboxModel, PXGadgetDelegate;

@interface PXInboxViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXOneUpPresentationDelegate, PXGadget>

@property (class, readonly, nonatomic) PXInboxAggregateDataSourceManager *createInboxDataSourceManager;

@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PXInboxAggregateDataSource *dataSource;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *cellLayoutCoordinator;
@property (nonatomic) double currentRowHeight;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) id<PXInboxModel> lastSelectedModel;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dataSourceIndexRange;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentRect;

+ (void)preloadResources;

- (id)px_gridPresentation;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)contentViewController;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithDataSourceManager:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)_numberOfRows;
- (BOOL)_isModelUnseen:(id)a0;
- (id)_createDividerView;
- (id)_createTransparentFullWidthViewOfHeight:(double)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_dataSourceIndexPathFromTableViewIndexPath:(id)a0;
- (void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)a0;
- (double)_dividerHeight;
- (BOOL)_shouldHandleAllIndexes;
- (void)_startOneUpPresentationForModel:(id)a0;
- (id)_tableViewIndexPathFromDataSourceIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_updateSeenState;
- (void)_updateTableViewFrameAndBounds;
- (void)gadgetControllerHasAppeared;
- (void)ppt_performBlockAfterLoadingCompletes:(id /* block */)a0;

@end
