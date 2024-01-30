@class _UIDocumentPickerSortOrderView, NSArray, _UIDocumentPickerContainerModel, _UIDocumentSearchListController, _UIDocumentPickerSearchPaletteView, NSString, UIViewController;
@protocol _UIDocumentPickerContainedViewController, _UIDocumentPickerServiceViewController;

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate>

@property (retain, nonatomic) UIViewController<_UIDocumentPickerContainedViewController> *childViewController;
@property (retain, nonatomic) _UIDocumentPickerContainerModel *model;
@property (retain, nonatomic) _UIDocumentPickerSortOrderView *sortView;
@property (retain, nonatomic) _UIDocumentPickerSearchPaletteView *searchView;
@property (weak, nonatomic) id<_UIDocumentPickerServiceViewController> serviceViewController;
@property (retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property (nonatomic) long long explicitDisplayMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (retain, nonatomic) _UIDocumentSearchListController *resultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userDefaults;

- (id)initWithModel:(id)a0;
- (void)setEditing:(BOOL)a0;
- (long long)displayMode;
- (int)sortOrder;
- (void)setSortOrder:(int)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)invalidate;
- (BOOL)isEditing;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupSearchController;
- (void)setChildViewController:(id)a0 animated:(BOOL)a1;
- (void)displayModeChanged;
- (long long)defaultDisplayMode;
- (void)_updateTraitCollection;
- (void)_sortOrderViewChanged:(id)a0;
- (void)_startSearchWithQueryString:(id)a0 becomeFirstResponder:(BOOL)a1;
- (void)ensureChildViewController;
- (void)setDefaultDisplayMode:(long long)a0;

@end
