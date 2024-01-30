@class NSString, HKSplashScreenItem, UIImage, NSLayoutConstraint, UILabel, UIImageView;

@interface HKSplashScreenFeatureViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) NSLayoutConstraint *iconTopConstraint;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *featureDescription;
@property (retain, nonatomic) HKSplashScreenItem *splashScreenItem;
@property (retain, nonatomic) UILabel *fullDescriptionLabel;
@property (retain, nonatomic) UIImageView *itemIconView;
@property (readonly) double cellPadding;

+ (id)_titleFont;
+ (id)_descriptionFont;

- (void)createSubviews;
- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateForFontOrTextChange;
- (void)setIcon:(id)a0 title:(id)a1 description:(id)a2;

@end
