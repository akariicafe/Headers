@class UIColor, UIFont, UIImageView, UILabel;

@interface AVTomatoRatingView : UIView {
    UIImageView *_tomatoRatingIcon;
    UILabel *_tomatoRatingLabel;
}

@property (nonatomic) float tomatoRating;
@property (nonatomic) unsigned long long tomatoFreshness;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;

- (id)viewForLastBaselineLayout;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
