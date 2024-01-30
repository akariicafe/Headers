@class NSString, UIImageView, UILabel, SKUIStarRatingControl;

@interface SKUIReviewInAppRatingHeaderView : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) SKUIStarRatingControl *ratingView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL completed;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)layoutSubviews;
- (id)_messageLabelFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTitle:(id)a0 message:(id)a1 icon:(id)a2;
- (void)setCompletedWithRating:(long long)a0;

@end
