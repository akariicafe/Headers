@class TableViewManager, NSMutableDictionary, NSIndexPath;

@interface ManagedTableViewCell : UITableViewCell {
    double _cellXEdgeInset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _modifiedContentViewFrame;
}

@property (nonatomic) TableViewManager *parentTableManager;
@property (retain, nonatomic) NSMutableDictionary *cellDict;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, nonatomic) double neededContentHeight;
@property (readonly, nonatomic) double computedRightmostEditTextInset;
@property (nonatomic) double forcedRightmostEditTextInset;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (void)prepareForReuse;
- (void)dealloc;
- (double)verticalInset;
- (double)edgeInsetValue:(id)a0;
- (double)rightInsetForView:(id)a0 withItem:(id)a1;
- (double)usableContentWidthForItem:(id)a0 withVerticalNeighborView:(id)a1;
- (double)usableContentWidth;
- (double)leftInsetForView:(id)a0 withItem:(id)a1;
- (double)horizontalSpacingForView:(id)a0 withItem:(id)a1;
- (double)verticalSpacingForView:(id)a0 withItem:(id)a1;
- (double)calculateFrameSizeForView:(id)a0 forItem:(id)a1 atItemIndex:(unsigned long long)a2 withRemainingContentWidth:(double)a3;
- (void)calculatePositionForView:(id)a0 forItem:(id)a1 atItemIndex:(unsigned long long)a2;
- (void)repositionView:(id)a0 ifOverlapsPreviousView:(id)a1;

@end
