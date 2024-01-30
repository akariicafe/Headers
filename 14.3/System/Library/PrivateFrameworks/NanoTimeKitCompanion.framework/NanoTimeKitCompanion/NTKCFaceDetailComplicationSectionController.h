@class NSSet, NTKCFaceDetailComplicationsHiddenCell, NSMutableArray, NTKFaceView;
@protocol NTKCFaceDetailComplicationSectionDelegate;

@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController

@property (retain, nonatomic) NTKFaceView *faceView;
@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NTKCFaceDetailComplicationsHiddenCell *hiddenCell;
@property (retain, nonatomic) NSSet *richComplicationSlots;
@property (weak, nonatomic) id<NTKCFaceDetailComplicationSectionDelegate> delegate;

+ (BOOL)hasComplicationsForFace:(id)a0;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)titleForHeader;
- (BOOL)_canSelectRow:(long long)a0;
- (void)didSelectRow:(long long)a0;
- (id)initWithTableViewController:(id)a0 face:(id)a1 faceView:(id)a2 inGallery:(BOOL)a3;
- (void)faceDidChange;
- (void)_addComplication:(id)a0;

@end
