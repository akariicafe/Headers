@class NTKCFaceDetailEditOptionCell, NSMutableArray, NSString;

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>

@property (retain, nonatomic) NTKCFaceDetailEditOptionCell *cell;
@property (retain, nonatomic) NSMutableArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectedOptions:(id)a0;
- (void)editOptionCell:(id)a0 didSelectOptionAtIndex:(long long)a1;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (void)didSelectRow:(long long)a0;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (void)reloadActionRow;
- (Class)editCellClass;

@end
