@class TSDInfoGeometry, NSMutableDictionary, TSUPointerKeyDictionary, TSTTableInfo, TSTLayout;

@interface TSTTablePartitioner : NSObject <TSDPartitioner> {
    BOOL mTableIsLTR;
    BOOL mLayoutIsLTR;
    TSTLayout *mScaledLayout;
    TSUPointerKeyDictionary *mHintMatricesByCanvas;
    NSMutableDictionary *mPartitioningPassCache;
}

@property (readonly, nonatomic) TSTLayout *scaledLayout;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) double inlineTableWidth;
@property (nonatomic) struct CGSize { double width; double height; } scaleToFit;
@property (readonly, nonatomic) BOOL scaleIsValid;
@property (copy, nonatomic) TSDInfoGeometry *infoGeometry;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } totalPartitionFrame;

- (void)dealloc;
- (id)initWithInfo:(id)a0;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (id)hintForLayout:(id)a0;
- (void)validateScaledLayout;
- (BOOL)p_didFinishPartitioningHint:(id)a0 horizontally:(BOOL)a1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })measureCellRangeForNextPartitionOfSize:(struct CGSize { double x0; double x1; })a0 previousHint:(id)a1 horizontally:(BOOL)a2;
- (id)partitioningPassForHint:(id)a0 withPreviousHint:(id)a1;
- (id)hintCacheKeyForHint:(id)a0;
- (BOOL)shouldReuseLayout:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 parentLayout:(id)a2 hint:(id)a3;
- (void)p_flushCacheAfterPartitioningFinished:(id)a0 lastHint:(id)a1 horizontally:(BOOL)a2;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize { double x0; double x1; })a0;
- (id)hintCacheKeyForPartitioningPass:(id)a0 andHintID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)setLayoutPartititionsRightToLeft:(BOOL)a0 contentPartitionsRightToLeft:(BOOL)a1;
- (BOOL)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(BOOL)a2;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })calculateCellRangeForNextPartition:(unsigned short)a0 nextPartitionRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 additionalHeightForCaption:(double)a2 availableSizeRemaining:(struct CGSize { double x0; double x1; })a3 previousHint:(id)a4;

@end
