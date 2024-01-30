@class NSString, NTKCompanionKaleidoscopeEditor, UIImagePickerController, UIViewController;
@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> {
    NTKCompanionKaleidoscopeEditor *_editor;
    UIImagePickerController *_presentedPicker;
    unsigned long long _currentAsset;
    BOOL _externalAssetSet;
    id<NTKCFaceDetailEditOptionSectionDelegate> delegate;
}

@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasSectionForFace:(id)a0 forEditMode:(long long)a1;
+ (BOOL)supressesSectionForExternalAssets:(id)a0;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)_presentPhotoPicker;
- (void)setSelectedOptions:(id)a0;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)a0;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (void)setExternalAsset:(id)a0;
- (void)_customizeActionRow:(id)a0 withEditOption:(id)a1;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)a0 andOption:(id)a1;
- (BOOL)_handleDidSelectActionRowForOption:(id)a0;
- (Class)editCellClass;
- (void)_setPhotoFromDictionary:(id)a0;
- (void)_setPhotoFromAsset:(id)a0;
- (void)_setRawPhoto:(id)a0;
- (void)_finalizeEditor;

@end
