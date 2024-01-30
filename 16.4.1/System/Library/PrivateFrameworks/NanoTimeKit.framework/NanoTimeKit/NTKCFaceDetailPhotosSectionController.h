@class NTKCompanionSyncedAlbumEditor, NSString, NSArray, NTKCompanionMemoriesEditor, NTKBasePhotosFaceView, NTKCompanionTransientCustomPhotosEditor, UIViewController, NTKCompanionCustomPhotosEditor;
@protocol NTKCFaceDetailPhotosSectionDelegate;

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController <NTKCFaceDetailCustomPhotosViewControllerDelegate, NTKCFaceDetailAlbumChooserViewControllerDelegate> {
    BOOL _canDeleteCustomPhotos;
    unsigned long long _currentContent;
}

@property (retain, nonatomic) NTKBasePhotosFaceView *faceView;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *customPhotosEditor;
@property (retain, nonatomic) NTKCompanionSyncedAlbumEditor *syncedAlbumEditor;
@property (retain, nonatomic) NTKCompanionMemoriesEditor *memoriesEditor;
@property (retain, nonatomic) NTKCompanionTransientCustomPhotosEditor *transientEditor;
@property (retain, nonatomic) NSArray *externalAssets;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) id<NTKCFaceDetailPhotosSectionDelegate> delegate;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasPhotosSectionForFace:(id)a0 forEditMode:(long long)a1;

- (void).cxx_destruct;
- (id)_currentEditor;
- (id)_actionNameForOption:(id)a0;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)a0 andOption:(id)a1;
- (void)_customizeActionRow:(id)a0 withEditOption:(id)a1;
- (BOOL)_handleDidSelectActionRowForOption:(id)a0;
- (BOOL)_handleDidSelectOption:(id)a0;
- (void)_setPhotos:(id)a0;
- (void)_updatePhotosSection;
- (Class)actionRowCellClass;
- (void)albumChooserDidFinish:(id)a0;
- (BOOL)canAddFace;
- (void)customPhotosControllerDidFinish:(id)a0;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4 externalAssets:(id)a5;
- (void)saveChangesWithCompletion:(id /* block */)a0;
- (void)setSelectedOptions:(id)a0;

@end
