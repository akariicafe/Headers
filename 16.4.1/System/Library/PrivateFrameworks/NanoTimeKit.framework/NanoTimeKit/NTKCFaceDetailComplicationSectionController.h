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
- (void)_addComplication:(id)a0;
- (BOOL)_canSelectRow:(long long)a0;
- (void)didSelectRow:(long long)a0;
- (void)faceDidChange;
- (id)initWithTableViewController:(id)a0 face:(id)a1 faceView:(id)a2 inGallery:(BOOL)a3;
- (id)titleForHeader;

@end
