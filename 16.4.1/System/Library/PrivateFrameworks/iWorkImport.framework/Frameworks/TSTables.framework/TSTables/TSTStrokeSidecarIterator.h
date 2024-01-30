@class NSString, TSTCellRegion, NSObject, TSTStrokeSidecar;
@protocol TSTCellRegionIterating;

@interface TSTStrokeSidecarIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>

@property (readonly, nonatomic) TSTStrokeSidecar *strokeSidecar;
@property (readonly, nonatomic) TSTCellRegion *region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } curCellID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_filterRegion:(id)a0 strokeSidecar:(id)a1;

- (void)terminate;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (void)updateCellData:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)initWithStrokeSidecar:(id)a0 region:(id)a1;
- (void)updateFormulaForCellData:(id)a0;

@end
