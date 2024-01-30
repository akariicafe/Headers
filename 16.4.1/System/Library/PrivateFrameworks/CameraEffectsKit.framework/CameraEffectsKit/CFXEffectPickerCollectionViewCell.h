@class NSString, JFXImageView, CFXEffect, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) JFXImageView *imageView;
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) CFXEffect *effect;
@property (retain, nonatomic) NSString *effectIdentifier;

- (id)accessibilityLabel;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)configureCellAppearence;

@end
