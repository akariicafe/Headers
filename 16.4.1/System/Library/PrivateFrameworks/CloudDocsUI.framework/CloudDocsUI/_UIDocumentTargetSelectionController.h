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

+ (id)_loadThumbnailForURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 wantsBorder:(BOOL *)a3 generatedThumbnail:(BOOL *)a4;
+ (id)_loadDocumentIconForURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (long long)displayMode;
- (int)sortOrder;
- (void)setSortOrder:(int)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setDisplayMode:(long long)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)didSelectItem:(id)a0;
- (void)dismiss:(id)a0;
- (void)_setupNavigationItem;
- (void)setItemsToMove:(id)a0;
- (void)_commonInitItems:(id)a0 crossContainer:(BOOL)a1 sourceContainer:(id)a2;
- (void)_setContainerViewController:(id)a0;
- (void)_setIconViewImage:(id)a0 border:(BOOL)a1;
- (void)_setupPalette;
- (void)_updatePalette;
- (id)initForCopyWithItems:(id)a0;
- (id)initForCrossContainerMoveWithItemsToMove:(id)a0;
- (id)initWithItemsToMove:(id)a0;
- (id)navControllerForPalette;
- (id)pickableTypes;
- (unsigned long long)pickerMode;

@end
