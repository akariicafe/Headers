@class NSString, GEOAppleRating, UILabel, NSAttributedString;

@interface MKOverallRatingHeaderView : MKPlaceSectionItemView {
    UILabel *_overallPercentageLabel;
    UILabel *_thumbsRecommendedLabel;
    UILabel *_numberOfPeopleLabel;
}

@property (readonly, nonatomic) NSAttributedString *overallPercentageString;
@property (readonly, nonatomic) NSString *numberOfPeopleString;
@property (retain, nonatomic) GEOAppleRating *overallRating;

- (void)_updateContent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)recommendedString;
- (void)_contentSizeDidChange;

@end
