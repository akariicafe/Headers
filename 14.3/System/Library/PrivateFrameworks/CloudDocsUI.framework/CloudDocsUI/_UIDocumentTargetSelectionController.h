@class _UIDocumentPickerContainerViewController, NSArray, NSString, UINavigationController, _UINavigationControllerPalette, UIImageView, UILabel;
@protocol _UIDocumentTargetSelectionControllerDelegate;

@interface _UIDocumentTargetSelectionController : UIViewController <_UIDocumentPickerServiceViewController, _UIDocumentPickerServiceInvalidating> {
    id<_UIDocumentTargetSelectionControllerDelegate> _weak_delegate;
    _UIDocumentPickerContainerViewController *_containerViewController;
    UINavigationController *_containedNavigationController;
    _UINavigationControllerPalette *_palette;
    UIImageView *_iconView;
    UILabel *_filesLabel;
    NSString *_containerName;
    id _firstFileThumbnailObservation;
    unsigned long long _targetSelectionType;
    BOOL _completedInitialDisplay;
}

@property (weak, nonatomic) id<_UIDocumentTargetSelectionControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *itemsToMove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_loadDocumentIconForURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_loadThumbnailForURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 wantsBorder:(BOOL *)a3 generatedThumbnail:(BOOL *)a4;

- (int)sortOrder;
- (long long)displayMode;
- (void)setSortOrder:(int)a0;
- (void)setDisplayMode:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_setupNavigationItem;
- (id)initWithCoder:(id)a0;
- (void)dismiss:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)invalidate;
- (void)didSelectItem:(id)a0;
- (void)_updatePalette;
- (void)_setContainerViewController:(id)a0;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (id)initWithItemsToMove:(id)a0;
- (void)setItemsToMove:(id)a0;
- (void)_commonInitItems:(id)a0 crossContainer:(BOOL)a1 sourceContainer:(id)a2;
- (void)_setupPalette;
- (id)navControllerForPalette;
- (void)_setIconViewImage:(id)a0 border:(BOOL)a1;
- (id)initForCrossContainerMoveWithItemsToMove:(id)a0;
- (id)initForCopyWithItems:(id)a0;

@end
