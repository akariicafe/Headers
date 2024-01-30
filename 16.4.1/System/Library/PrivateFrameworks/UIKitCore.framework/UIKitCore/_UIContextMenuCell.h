@class _UIContextMenuCellContentView;

@interface _UIContextMenuCell : UICollectionViewCell

@property (readonly, nonatomic) _UIContextMenuCellContentView *actionView;

+ (Class)_contentViewClass;
+ (BOOL)_isInternalCell;
+ (BOOL)_wantsLegacyMenuGesture;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (long long)_focusItemDeferralMode;
- (BOOL)_wantsKeyCommandsWhenDeferred;

@end
