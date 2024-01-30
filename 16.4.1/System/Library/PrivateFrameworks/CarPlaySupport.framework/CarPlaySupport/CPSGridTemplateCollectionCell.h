@class CPSGridButton;

@interface CPSGridTemplateCollectionCell : UICollectionViewCell

@property (retain, nonatomic) CPSGridButton *button;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;

@end
