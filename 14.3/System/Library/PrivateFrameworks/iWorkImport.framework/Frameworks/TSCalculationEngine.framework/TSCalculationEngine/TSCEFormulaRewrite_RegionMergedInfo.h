@class TSCEFormulaRewrite_RegionInfo;

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } mergeSource;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *mergeRegion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMergeRegion:(id)a0 mergeSource:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;

@end
