@class UIColor, UIVisualEffect;

@interface _UICollectionViewListLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewListSeparatorAttributes, UICollectionViewListItemAttributes, UICollectionViewListSectionHeaderFooterAttributes>

@property (nonatomic) long long appearanceStyle;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
