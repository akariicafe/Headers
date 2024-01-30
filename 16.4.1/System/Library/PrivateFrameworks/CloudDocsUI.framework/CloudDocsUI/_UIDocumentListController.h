@class _UIDocumentPickerContainerViewController, NSArray, NSString, NSURL, _UIDocumentSearchListController;
@protocol _UIDocumentListControllerDelegate;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration> {
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    long long _displayModeIfNotDeferred;
    long long _availableActionsIfNotDeferred;
    id<_UIDocumentListControllerDelegate> _delegateIfNotDeferred;
    _UIDocumentSearchListController *_searchController;
    struct CGPoint { double x; double y; } _stateRestoredContentOffset;
}

@property (weak, nonatomic) _UIDocumentListController *rootListController;
@property (weak, nonatomic) id<_UIDocumentListControllerDelegate> delegate;
@property (nonatomic) BOOL hideSearchField;
@property (readonly, nonatomic) NSURL *presentedURL;
@property (readonly, nonatomic) NSArray *containedItems;
@property (retain, nonatomic) NSArray *selectedItems;
@property (nonatomic) BOOL editing;
@property (nonatomic) long long availableActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;
+ (id)_listControllerHierarchyForURL:(id)a0 withConstructorBlock:(id /* block */)a1;
+ (id)listControllerHierarchyForURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)initWithModel:(id)a0;
- (long long)displayMode;
- (int)sortOrder;
- (void)setSortOrder:(int)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)model;
- (void)setDisplayMode:(long long)a0;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)updateTitle;
- (BOOL)shouldHighlightItem:(id)a0;
- (Class)_classForChildren;
- (void)_commonInitWithModel:(id)a0;
- (void)_performScrollTest:(id)a0 iterations:(int)a1 delta:(int)a2 listMode:(long long)a3;
- (void)_setContainerViewController:(id)a0;
- (void)_updateScrollPositionForStateRestoration;
- (void)createSearchControllerWithModel:(id)a0;
- (void)didHighlightItem:(id)a0;
- (void)didUnhighlightItem:(id)a0;
- (void)itemsOrSelectionDidChange:(BOOL)a0;
- (void)performAction:(long long)a0 item:(id)a1 view:(id)a2 completion:(id /* block */)a3;
- (id)previewViewControllerForItem:(id)a0;
- (BOOL)shouldSelectItem:(id)a0;
- (BOOL)shouldShowAction:(long long)a0;
- (void)startSearchWithQueryString:(id)a0 becomeFirstResponder:(BOOL)a1;

@end
