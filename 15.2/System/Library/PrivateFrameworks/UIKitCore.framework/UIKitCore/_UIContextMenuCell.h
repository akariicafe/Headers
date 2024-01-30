@class _UIContextMenuCellContentView;

@interface _UIContextMenuCell : UICollectionViewCell

@property (readonly, nonatomic) _UIContextMenuCellContentView *actionView;

+ (BOOL)_isInternalCell;
+ (Class)_contentViewClass;

- (long long)_focusItemDeferralMode;
- (BOOL)_wantsKeyEventsWhenDeferred;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;

@end
