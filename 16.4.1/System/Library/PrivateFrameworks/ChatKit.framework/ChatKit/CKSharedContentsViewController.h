@class NSString, NSArray, UICollectionView, CKQLPreviewController, UICollectionViewFlowLayout, UIView, UIBarButtonItem;
@protocol CKSharedAssetsControllerDelegate;

@interface CKSharedContentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, CKQLPreviewControllerDelegate, UIGestureRecognizerDelegate, CKSharedContentsCollectionViewCellDelegate, CKSharedAssetsControllerProtocol, QLPreviewControllerDelegate>

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionviewLayout;
@property (retain, nonatomic) CKQLPreviewController *qlPreviewController;
@property (retain, nonatomic) UIView *topmostMarkerView;
@property (retain, nonatomic) NSArray *attachmentItems;
@property (nonatomic, getter=isSelectingAttachments) BOOL selectingAttachments;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) UIBarButtonItem *deleteButton;
@property (retain, nonatomic) NSArray *parentRightBarButtonItemsToRestore;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<CKSharedAssetsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (unsigned long long)assetType;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewController:(id)a0 frameForPreviewItem:(id)a1 inSourceView:(id *)a2;
- (void)previewControllerDidDismiss:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)collectionView:(id)a0 shouldShowMenuForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 performAction:(SEL)a1 forItemAtIndexPath:(id)a2 withSender:(id)a3;
- (BOOL)previewController:(id)a0 shouldOpenURL:(id)a1 forPreviewItem:(id)a2;
- (BOOL)collectionView:(id)a0 canPerformAction:(SEL)a1 forItemAtIndexPath:(id)a2 withSender:(id)a3;
- (void)willPresentPreviewViewController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)_collectionView:(id)a0 dragItemsForItemAtIndexPath:(id)a1;
- (id)committedViewControllerForPreviewViewController:(id)a0;
- (id)avatarView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (double)cellAspectRatio;
- (void)teardownToolbar;
- (void)deleteContents:(id)a0;
- (void)cancelSelectingContents:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)deleteSelectedContents:(id)a0;
- (id)initWithAttachmentItems:(id)a0;
- (id)invisibleInkEffectControllerForPreviewController:(id)a0;
- (BOOL)isDisplayingAttachmentContent;
- (BOOL)isJ99LandscapeModeFullScreen;
- (long long)numberOfItemsInRow;
- (double)paddingLeftRightForCell;
- (double)paddingTopBottomForCell;
- (void)parentScrollViewDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)performAction:(SEL)a0 forSharedContentsCollectionViewCell:(id)a1;
- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 realSize:(struct CGSize { double x0; double x1; } *)a3;
- (void)previewControllerDidCancelDismiss:(id)a0;
- (void)saveSelectedContents:(id)a0;
- (id)selectedAttachmentIndexes;
- (void)setupToolbar;
- (void)sharedContentsCollectionViewCellDidTap:(id)a0;
- (void)updateAttachmentItems:(id)a0;
- (void)updateToolbar;

@end
