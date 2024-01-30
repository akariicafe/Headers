@class UIColor;

@interface VUIListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) BOOL shouldAppearSelected;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;

@end
