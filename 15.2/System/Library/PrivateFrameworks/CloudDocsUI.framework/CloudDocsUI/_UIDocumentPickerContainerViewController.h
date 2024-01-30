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

- (int)sortOrder;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSortOrder:(int)a0;
- (void)viewDidLayoutSubviews;
- (long long)displayMode;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupSearchController;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateTraitCollection;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isEditing;
- (void)dealloc;
- (id)initWithModel:(id)a0;
- (void)setChildViewController:(id)a0 animated:(BOOL)a1;
- (void)setEditing:(BOOL)a0;
- (long long)defaultDisplayMode;
- (void)displayModeChanged;
- (void)_startSearchWithQueryString:(id)a0 becomeFirstResponder:(BOOL)a1;
- (void)_sortOrderViewChanged:(id)a0;
- (void)ensureChildViewController;
- (void)setDefaultDisplayMode:(long long)a0;

@end
