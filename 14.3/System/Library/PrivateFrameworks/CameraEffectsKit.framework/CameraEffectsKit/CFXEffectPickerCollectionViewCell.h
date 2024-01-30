@class NSString, JFXImageView, CFXEffect, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) JFXImageView *imageView;
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) CFXEffect *effect;
@property (retain, nonatomic) NSString *effectIdentifier;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)configureCellAppearence;

@end
