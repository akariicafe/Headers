@class CPSGridButton;

@interface CPSGridTemplateCollectionCell : UICollectionViewCell

@property (retain, nonatomic) CPSGridButton *button;

+ (id)reuseIdentifier;

- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
