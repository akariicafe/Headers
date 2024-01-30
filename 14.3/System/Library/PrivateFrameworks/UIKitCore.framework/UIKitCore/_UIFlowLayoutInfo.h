@class UICollectionViewFlowLayout, NSMutableArray;

@interface _UIFlowLayoutInfo : NSObject {
    BOOL _useFloatingHeaderFooter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _isValid;
    struct CGSize { double width; double height; } _computedEstimatedSum;
    long long _computedEstimatedCount;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL usesFloatingHeaderFooter;
@property (nonatomic) double dimension;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL leftToRight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } rowAlignmentOptions;
@property (weak, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) BOOL estimatesSizes;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } computedEstimatedSize;

- (void)invalidate:(BOOL)a0;
- (id)invalidatedIndexPaths;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)snapshot;
- (void)didUpdateSizeForSection:(long long)a0 withDelta:(double)a1;
- (id)copy;
- (id)specifiedItemSizes;
- (void)setSizes:(id)a0 forItemsAtIndexPaths:(id)a1;
- (id)addSection;
- (void)updateEstimatedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)setSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndexPath:(id)a1;

@end
