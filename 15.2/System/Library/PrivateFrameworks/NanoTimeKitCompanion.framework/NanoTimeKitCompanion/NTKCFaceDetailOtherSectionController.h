@class NSString, NTKCFaceDetailMonogramComplicationCell, NTKCFaceDetailMonogramEditCell, NTKCFaceDetailShowSecondsCell;
@protocol NTKCFaceDetailOtherSectionDelegate;

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate>

@property (retain, nonatomic) NTKCFaceDetailMonogramComplicationCell *monogramCell;
@property (retain, nonatomic) NTKCFaceDetailMonogramEditCell *monogramEditCell;
@property (retain, nonatomic) NTKCFaceDetailShowSecondsCell *showSecondsCell;
@property (weak, nonatomic) id<NTKCFaceDetailOtherSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)titleForHeader;
- (void)toggleCell:(id)a0 didToggle:(BOOL)a1;
- (BOOL)_canSelectRow:(long long)a0;
- (void)didSelectRow:(long long)a0;
- (void)addMonogramRowForSlot:(id)a0;
- (void)faceDidChange;
- (void)addShowSecondsRow:(id)a0;
- (void)_addMonogramEditRow;
- (void)removeMonogramRow;
- (void)removeShowSecondsRow;
- (void)_removeMonogramEditRow;

@end
