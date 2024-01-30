@class NSString, UIViewController, NTKCompanionKaleidoscopeEditor;
@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> {
    NTKCompanionKaleidoscopeEditor *_editor;
    UIViewController *_presentedPicker;
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

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_presentPhotoPicker;
- (void)_finalizeEditor;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)a0 andOption:(id)a1;
- (void)_customizeActionRow:(id)a0 withEditOption:(id)a1;
- (BOOL)_handleDidSelectActionRowForOption:(id)a0;
- (void)_setPhotoFromAsset:(id)a0;
- (void)_setPhotoFromDictionary:(id)a0;
- (void)_setRawPhoto:(id)a0;
- (Class)actionRowCellClass;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (Class)editCellClass;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)a0;
- (void)setExternalAsset:(id)a0;
- (void)setSelectedOptions:(id)a0;

@end
