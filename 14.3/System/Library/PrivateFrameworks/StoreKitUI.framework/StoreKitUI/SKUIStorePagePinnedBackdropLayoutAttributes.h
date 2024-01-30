@class UIColor, NSString;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>

@property (retain, nonatomic) UIColor *backdropColor;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long backdropStyle;
@property (nonatomic) BOOL hidesBackdropView;
@property (nonatomic) double transitionProgress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
