@class _TVImageView, VUILabel, TVRatingBadgeView, UIView, VUIFeedbackLayout;

@interface VUIFeedbackView : UIView

@property (retain, nonatomic) VUILabel *prototypeSubtitleLabel;
@property (retain, nonatomic) VUILabel *prototypeHeaderLabel;
@property (retain, nonatomic) VUIFeedbackLayout *layout;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) VUILabel *headerSubtitleLabel;
@property (retain, nonatomic) _TVImageView *headerBadgeView;
@property (retain, nonatomic) VUILabel *sourceLabel;
@property (retain, nonatomic) _TVImageView *sourceBadgeView;
@property (retain, nonatomic) TVRatingBadgeView *ratingView;
@property (retain, nonatomic) UIView *descriptionView;
@property (nonatomic) struct CGSize { double width; double height; } headerBadgeSize;
@property (nonatomic) struct CGSize { double width; double height; } sourceBadgeSize;

+ (id)headerBadgeViewWithImageElement:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)headerImageViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)headerTitleViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)headerSubtitleLabelWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)sourceBadgeViewWithImageElement:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)sourceLabelWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)descriptionViewWithElement:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (struct CGSize { double x0; double x1; })_scaledBadgeSizeWithImageLayout:(id)a0 traitCollection:(id)a1;

- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;

@end
