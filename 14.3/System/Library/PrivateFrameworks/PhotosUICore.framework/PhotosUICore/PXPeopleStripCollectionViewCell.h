@class NSArray, PXRoundedCornerOverlayView;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSArray *groupAvatarViews;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (retain, nonatomic) NSArray *people;

- (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
