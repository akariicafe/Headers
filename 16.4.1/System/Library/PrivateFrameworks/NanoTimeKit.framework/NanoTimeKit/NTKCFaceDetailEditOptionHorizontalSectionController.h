@class NTKCFaceDetailEditOptionCell, NSMutableArray, NSString;

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>

@property (retain, nonatomic) NTKCFaceDetailEditOptionCell *cell;
@property (retain, nonatomic) NSMutableArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadActionRow;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (void)didSelectRow:(long long)a0;
- (Class)editCellClass;
- (void)editOptionCell:(id)a0 didSelectOptionAtIndex:(long long)a1;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (void)setSelectedOptions:(id)a0;

@end
