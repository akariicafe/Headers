@interface _TVListDescriptionViewCell : UICollectionViewCell

@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)layoutSubviews;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusFromView:(id)a0;

@end
