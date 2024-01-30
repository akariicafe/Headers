@interface _TVListDescriptionViewCell : UICollectionViewCell

@property (nonatomic, getter=isDisabled) BOOL disabled;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)didUpdateFocusFromView:(id)a0;

@end
