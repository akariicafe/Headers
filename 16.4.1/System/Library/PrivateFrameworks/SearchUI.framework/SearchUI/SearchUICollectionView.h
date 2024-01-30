@interface SearchUICollectionView : UICollectionView

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didAddSubview:(id)a0;
- (id)focusGroupIdentifier;
- (void)didMoveToWindow;
- (void)applySeparatorAppearance:(id)a0 toSubviewIfNecessary:(id)a1;

@end
