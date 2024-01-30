@class UIBarButtonItem, NSArray, NTKBasePhotosFaceView, NTKFace, NSMutableIndexSet, NTKCompanionCustomPhotosEditor;
@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;

@interface _NTKCFaceDetailCustomPhotosViewController : UICollectionViewController {
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_selectAllButton;
    UIBarButtonItem *_deselectAllButton;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_addButton;
    UIBarButtonItem *_spinnerButton;
    NSArray *_defaultToolBarItems;
    NSArray *_editingToolBarItems;
    NSMutableIndexSet *_selectedIndexes;
    BOOL _deleteConfirmed;
}

@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (weak, nonatomic) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate;
@property (nonatomic) BOOL inGallery;
@property (retain, nonatomic) NTKBasePhotosFaceView *faceView;
@property (nonatomic) BOOL externalImagesSet;

- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_updateTitle;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateButtons;
- (void)viewWillAppear:(BOOL)a0;
- (void)_donePressed;
- (void)viewDidLoad;
- (void)_deletePressed;
- (id)initWithPhotosEditor:(id)a0 forFace:(id)a1 inGallery:(BOOL)a2 faceView:(id)a3 externalImagesSet:(BOOL)a4;
- (void)_savePressed;
- (void)_selectPressed;
- (void)_selectAllPressed;
- (void)_addPressed;
- (void)_updateButtonsForSelectionChanged;
- (id)_currentSelectAllButton;
- (BOOL)_allPhotosSelected;
- (void)_selectAllPhotos;

@end
