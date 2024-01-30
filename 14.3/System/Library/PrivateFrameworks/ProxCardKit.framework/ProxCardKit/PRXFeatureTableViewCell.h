@class NSString, UIImageView, UIImage, UILabel, NSLayoutConstraint, UISwitch;

@interface PRXFeatureTableViewCell : UITableViewCell

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *featureImageView;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *imageViewVerticalAnchor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UISwitch *switchControl;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLabelHyphenationFactor;
- (void)_updateImageViewAnchors;
- (void)_updateTitleIndent;
- (void)_updateTitleLeadingAnchor;

@end
