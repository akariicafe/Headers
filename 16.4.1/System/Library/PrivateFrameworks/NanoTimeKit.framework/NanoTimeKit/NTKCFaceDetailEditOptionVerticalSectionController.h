@class NSString, NSMutableArray, NTKCFaceDetailDescriptionCell;

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController

@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NTKCFaceDetailDescriptionCell *footerCell;
@property (retain, nonatomic) NSString *footer;

- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)reloadActionRow;
- (BOOL)_canSelectRow:(long long)a0;
- (void)_setupWithCollection:(id)a0;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (void)didSelectRow:(long long)a0;
- (void)faceDidChange;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (void)setSelectedOptions:(id)a0;

@end
