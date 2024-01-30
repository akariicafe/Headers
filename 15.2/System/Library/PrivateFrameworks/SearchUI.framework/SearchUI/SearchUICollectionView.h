@protocol SearchUICollectionViewSizingDelegate;

@interface SearchUICollectionView : UICollectionView

@property (weak) id<SearchUICollectionViewSizingDelegate> sizingDelegate;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)focusGroupIdentifier;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)applySeparatorAppearance:(id)a0 toSubviewIfNecessary:(id)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)didMoveToWindow;

@end
