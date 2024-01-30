@class HUQuickControlCollectionViewCellContainerViewController, HUQuickControlCollectionViewLayoutAttributes;

@interface HUQuickControlViewControllerCollectionViewCell : HUViewControllerCollectionViewCell

@property (retain, nonatomic) HUQuickControlCollectionViewLayoutAttributes *activeLayoutAttributes;
@property (retain, nonatomic) HUQuickControlCollectionViewCellContainerViewController *viewController;

+ (unsigned long long)quickControlSizeForItemSize:(unsigned long long)a0;

- (void)applyLayoutAttributes:(id)a0;
- (void)setViewController:(id)a0;
- (void).cxx_destruct;
- (void)_updateContentViewControllerForActiveLayoutAttributes;

@end
