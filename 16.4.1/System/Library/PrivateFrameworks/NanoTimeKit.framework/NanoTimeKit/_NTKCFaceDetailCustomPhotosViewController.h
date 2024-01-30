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

- (void)_updateTitle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateButtons;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_donePressed;
- (void)_addPressed;
- (BOOL)_allPhotosSelected;
- (id)_currentSelectAllButton;
- (void)_deletePressed;
- (void)_savePressed;
- (void)_selectAllPhotos;
- (void)_selectAllPressed;
- (void)_selectPressed;
- (void)_updateButtonsForSelectionChanged;
- (id)initWithPhotosEditor:(id)a0 forFace:(id)a1 inGallery:(BOOL)a2 faceView:(id)a3 externalImagesSet:(BOOL)a4;

@end
