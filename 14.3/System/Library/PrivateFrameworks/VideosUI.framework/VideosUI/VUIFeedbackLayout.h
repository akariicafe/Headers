@class TVImageLayout, UIColor, VUITextLayout, VUIFeedbackTableLayout, TVRatingBadgeLayout;

@interface VUIFeedbackLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *headerTitleLayout;
@property (readonly, nonatomic) VUITextLayout *headerSubtitleLayout;
@property (readonly, nonatomic) VUITextLayout *sourceTextLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionTextLayout;
@property (readonly, nonatomic) TVImageLayout *headerBadgeLayout;
@property (readonly, nonatomic) TVImageLayout *sourceBadgeLayout;
@property (readonly, nonatomic) VUIFeedbackTableLayout *reviewTableLayout;
@property (readonly, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout;
@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (retain, nonatomic) UIColor *darkHighlightColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerImagePadding;
@property (readonly, nonatomic) long long layoutType;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (void).cxx_destruct;
- (id)initWithLayoutType:(long long)a0;
- (void)_setupLayout:(long long)a0;

@end
