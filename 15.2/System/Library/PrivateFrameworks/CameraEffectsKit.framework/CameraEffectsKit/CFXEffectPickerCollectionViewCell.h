@class NSString, JFXImageView, CFXEffect, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) JFXImageView *imageView;
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) CFXEffect *effect;
@property (retain, nonatomic) NSString *effectIdentifier;

- (void)awakeFromNib;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (void)configureCellAppearence;

@end
