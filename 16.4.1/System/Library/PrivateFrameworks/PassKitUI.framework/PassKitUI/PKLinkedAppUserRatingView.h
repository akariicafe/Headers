@class NSMutableArray;

@interface PKLinkedAppUserRatingView : UIView {
    NSMutableArray *_starViews;
}

@property (nonatomic) float userRating;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_starImageViewWithImage:(id)a0;

@end
