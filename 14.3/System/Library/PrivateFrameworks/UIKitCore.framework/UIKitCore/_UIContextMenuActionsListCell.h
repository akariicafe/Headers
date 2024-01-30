@class _UIContextMenuActionView;

@interface _UIContextMenuActionsListCell : UICollectionViewCell

@property (readonly, nonatomic) _UIContextMenuActionView *actionView;

+ (Class)_contentViewClass;
+ (BOOL)_isInternalCell;

- (void)setHighlighted:(BOOL)a0;

@end
