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

+ (id)_descriptionFont;
+ (id)_titleFont;

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)createSubviews;
- (void)updateForFontOrTextChange;
- (void)setIcon:(id)a0 title:(id)a1 description:(id)a2;

@end
