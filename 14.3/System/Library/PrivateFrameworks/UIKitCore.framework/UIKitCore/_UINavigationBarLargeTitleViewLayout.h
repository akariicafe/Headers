@class _UINavigationBarLargeTitleView, NSMutableDictionary, UILabel, UIView;

@interface _UINavigationBarLargeTitleViewLayout : NSObject {
    NSMutableDictionary *_titleHeightCache;
    NSMutableDictionary *_restingHeightCache;
    double _cachedRestingHeight;
}

@property (readonly, nonatomic) _UINavigationBarLargeTitleView *contentView;
@property (nonatomic) long long titleType;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long twoLineMode;
@property (readonly, nonatomic) double titleRestingHeight;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL alignAccessoryViewToTitleBaseline;
@property (nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } layoutMargins;

- (id)initWithContentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentLayoutBounds;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)a0;
- (void)layoutViewsWithOffset:(struct UIOffset { double x0; double x1; })a0 useRestingTitleHeight:(BOOL)a1;
- (void)setContentAlpha:(double)a0;
- (void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(struct UIOffset { double x0; double x1; })a0 useRestingTitleHeight:(BOOL)a1;
- (void)_enforceLayoutOrdering;
- (void)layoutViews;
- (void)_invalidateTitleHeightCache;
- (struct CGSize { double x0; double x1; })_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)a0;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)a0;
- (void)cleanupAfterLayoutTransitionCompleted;
- (double)_textHeightForSize:(struct CGSize { double x0; double x1; })a0 titleType:(long long)a1;
- (void)setContentHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeFittingSize:(struct CGSize { double x0; double x1; })a0 titleType:(long long)a1;
- (void)removeContent;
- (void)updateRestingTitleHeight;

@end
