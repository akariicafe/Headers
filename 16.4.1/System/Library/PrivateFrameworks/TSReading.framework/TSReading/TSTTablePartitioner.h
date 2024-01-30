@class TSDInfoGeometry, NSMutableDictionary, TSUPointerKeyDictionary, TSTTableInfo, TSTLayout;

@interface TSTTablePartitioner : NSObject <TSDPartitioner> {
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

- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (BOOL)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(BOOL)a2 delta:(int)a3;
- (id)hintCacheKeyForHint:(id)a0;
- (id)hintCacheKeyForPartitioningPass:(id)a0 andHintID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (id)hintForLayout:(id)a0;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })measureCellRangeForNextPartitionOfSize:(struct CGSize { double x0; double x1; })a0 previousHint:(id)a1 horizontally:(BOOL)a2;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (BOOL)p_didFinishPartitioningHint:(id)a0 horizontally:(BOOL)a1;
- (void)p_flushCacheAfterPartitioningFinished:(id)a0 lastHint:(id)a1 horizontally:(BOOL)a2;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize { double x0; double x1; })a0;
- (id)partitioningPassForHint:(id)a0 withPreviousHint:(id)a1;
- (BOOL)shouldReuseLayout:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 parentLayout:(id)a2 hint:(id)a3;
- (void)validateScaledLayout;

@end
