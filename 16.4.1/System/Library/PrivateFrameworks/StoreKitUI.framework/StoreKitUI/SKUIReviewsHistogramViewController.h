@class UIControl, NSString, SKUIClientContext, SKUIReviewList, NSArray, SKUIReviewsHistogramView;

@interface SKUIReviewsHistogramViewController : UIViewController {
    SKUIReviewsHistogramView *_histogramView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIReviewList *reviewList;
@property (copy, nonatomic) NSString *versionString;
@property (readonly, nonatomic) UIControl *segmentedControl;
@property (copy, nonatomic) NSArray *segmentedControlTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (readonly, nonatomic) UIControl *starRatingControl;
@property (nonatomic) long long personalStarRating;
@property (readonly, nonatomic) UIControl *appSupportButton;
@property (readonly, nonatomic) UIControl *writeAReviewButton;

- (void).cxx_destruct;
- (void)loadView;
- (id)_histogramView;
- (void)_reloadHistogram;

@end
