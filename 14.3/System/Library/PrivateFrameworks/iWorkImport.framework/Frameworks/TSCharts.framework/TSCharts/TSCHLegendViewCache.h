@class TSCHLegendModelCache;

@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent> {
    unsigned long long mCellCount;
    TSCHLegendModelCache *mModelCache;
    struct CGPoint { double x0; double x1; } *mCellOrigins;
}

@property (readonly) unsigned long long numberOfRows;
@property (readonly) unsigned long long numberOfColumns;
@property (readonly) struct CGSize { double width; double height; } legendSize;

- (void).cxx_destruct;
- (void)dealloc;
- (void)clearParent;
- (struct CGPoint { double x0; double x1; })originForCell:(id)a0;
- (id)initWithLegendModelCache:(id)a0 legendWidth:(double)a1;

@end
