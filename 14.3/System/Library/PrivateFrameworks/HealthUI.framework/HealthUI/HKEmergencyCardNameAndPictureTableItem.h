@class NSString, HKMedicalIDEditorNameAndPhotoCell;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    HKMedicalIDEditorNameAndPhotoCell *_cell;
}

@property (weak, nonatomic) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_cell;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setData:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (id)initInEditMode:(BOOL)a0;
- (id)title;
- (void)commitEditing;
- (void)medicalIDEditorCellDidChangeSelection:(id)a0 keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)medicalIDEditorCellDidBeginEditing:(id)a0 keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)medicalIDEditorCell:(id)a0 didChangeHeight:(double)a1 keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (void)_updateMedicalIDPhotoMenu;
- (void)_editPhotoTapped:(id)a0;
- (double)_cellFittedHeightWithWidth:(double)a0;
- (id)_makeMedicalIDPhotoMenu;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;

@end
