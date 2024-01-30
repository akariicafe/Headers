@class UIView, NSString, NSArray, UISegmentedControl, SKUIColorScheme, UIControl, SKUIClientContext, UIButton, SKUIStarRatingControl, NSMutableDictionary, UILabel, UIImageView;

@interface SKUIReviewsHistogramView : UIView {
    SKUIClientContext *_clientContext;
    UILabel *_countLabel;
    NSMutableDictionary *_ratings;
    UISegmentedControl *_segmentedControl;
    UILabel *_starRatingControlLabel;
    UILabel *_titleLabel;
    double _userRating;
    UIImageView *_userRatingStarsView;
    UIView *_bottomSeparatorView;
    UIImageView *_histogramImageView;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (copy, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSArray *histogramValues;
@property (readonly, nonatomic) UIControl *segmentedControl;
@property (copy, nonatomic) NSArray *segmentedControlTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (readonly, nonatomic) SKUIStarRatingControl *starRatingControl;
@property (nonatomic) long long personalStarRating;
@property (readonly, nonatomic) UIButton *appSupportButton;
@property (readonly, nonatomic) UIButton *writeAReviewButton;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_histogramImageForValues:(id)a0;
- (id)_countLabelString;

@end
