@class NTKPhotosFace, NSMutableIndexSet, NSObject, NTKCompanionCustomPhotosEditor;
@protocol OS_dispatch_queue, NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate;

@interface NTKGreenfieldCompanionSharePhotosPickerViewController : UICollectionViewController {
    NTKPhotosFace *_originalFace;
    NTKCompanionCustomPhotosEditor *_editor;
    NSMutableIndexSet *_selectedIndexes;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> delegate;

- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)_handleSelectionChanged;
- (void)_setupCollectionView;
- (void)viewDidLoad;
- (void)_didTapDeselectAll;
- (void)_setupNavigationItems;
- (void)_handleEditorDidCreated;
- (void)_createPhotosEditorWithCompletionBlock:(id /* block */)a0;
- (void)_didTapOnCancelButton;
- (void)_didTapOnDoneButton;
- (void)_handleDidFinishWithNewResourcesDirectory:(id)a0;
- (id)_queue_fetchAssets;
- (id)_queue_fetchOptions;
- (id)initWithPhotosFace:(id)a0;

@end
