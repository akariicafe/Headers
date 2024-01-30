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

- (void)_commonInit;
- (void).cxx_destruct;
- (void)_addMonogramEditRow;
- (BOOL)_canSelectRow:(long long)a0;
- (void)_removeMonogramEditRow;
- (void)addMonogramRowForSlot:(id)a0;
- (void)addShowSecondsRow:(id)a0;
- (void)didSelectRow:(long long)a0;
- (void)faceDidChange;
- (void)removeMonogramRow;
- (void)removeShowSecondsRow;
- (id)titleForHeader;
- (void)toggleCell:(id)a0 didToggle:(BOOL)a1;

@end
