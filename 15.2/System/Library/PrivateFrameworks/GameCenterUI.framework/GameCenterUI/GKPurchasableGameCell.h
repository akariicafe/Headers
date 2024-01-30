@class UILabel, GKStoreItemInternal, GKRatingView;

@interface GKPurchasableGameCell : GKBaseGameCell

@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (retain, nonatomic) UILabel *developerLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) GKRatingView *ratingStarsView;
@property (nonatomic) float capturedRating;
@property (retain, nonatomic) UILabel *numberRatings;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (BOOL)canRemoveItem;
- (void)establishConstraints;

@end
