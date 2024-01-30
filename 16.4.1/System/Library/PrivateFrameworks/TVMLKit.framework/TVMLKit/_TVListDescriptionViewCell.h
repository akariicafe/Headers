@interface _TVListDescriptionViewCell : UICollectionViewCell

@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)didUpdateFocusFromView:(id)a0;

@end
