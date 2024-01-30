@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } ignoreRange;

+ (id)computeTruncationForAlignments:(id)a0 indexForFirstTrailingColumn:(unsigned long long)a1 totalEqualColumns:(unsigned long long)a2;

- (double)gridArrangement:(id)a0 widthOfColumnAtIndex:(long long)a1 spacingAfter:(double *)a2;
- (struct CGSize { double x0; double x1; })sizeForFittingSize:(struct CGSize { double x0; double x1; })a0 forRow:(id)a1;

@end
