@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) UIColor *evenRowBackgroundColor;
@property (copy, nonatomic) UIColor *oddRowBackgroundColor;
@property (nonatomic) long long numberOfColumns;

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;

@end
