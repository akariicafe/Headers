@class NSArray;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSArray *groupAvatarViews;
@property (retain, nonatomic) NSArray *people;

- (id)focusEffect;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
