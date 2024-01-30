@class NTKEditOptionCollection, NSDictionary, NTKCFaceDetailRowActionCell, NTKFaceView;
@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController

@property (retain, nonatomic) NTKEditOptionCollection *collection;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (retain, nonatomic) NTKCFaceDetailRowActionCell *actionRow;
@property (retain, nonatomic) NSDictionary *selectedOptions;
@property (weak, nonatomic) id<NTKCFaceDetailEditOptionSectionDelegate> delegate;
@property (readonly, nonatomic) Class editCellClass;
@property (readonly, nonatomic) Class actionRowCellClass;

- (void).cxx_destruct;
- (void)reloadActionRow;
- (id)_actionNameForOption:(id)a0;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)a0 andOption:(id)a1;
- (BOOL)_canSelectRow:(long long)a0;
- (void)_createActionRow;
- (void)_customizeActionRow:(id)a0 withEditOption:(id)a1;
- (BOOL)_handleDidSelectActionRowForOption:(id)a0;
- (BOOL)_handleDidSelectOption:(id)a0;
- (BOOL)_hasActionRow;
- (id)_initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (void)_refreshActionRowContent;
- (void)_updateSelectedOptions;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (void)faceDidChange;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (id)optionAtIndex:(unsigned long long)a0;

@end
