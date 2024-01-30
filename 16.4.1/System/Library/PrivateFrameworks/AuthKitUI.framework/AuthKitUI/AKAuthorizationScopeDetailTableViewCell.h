@class UILayoutGuide, UIImageView, UIImage, NSLayoutConstraint, UILabel;

@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *leadingCheckmarkView;
@property (readonly, nonatomic) UILayoutGuide *mainGuide;
@property (readonly, nonatomic) UILayoutGuide *mainLabelFirstLineGuide;
@property (readonly, nonatomic) UILayoutGuide *scopeLabelFirstLineGuide;
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *mainLabelLeadingConstraint;
@property (nonatomic) unsigned long long internalCheckmarkStyle;
@property (nonatomic, getter=internalIsChecked) BOOL internalChecked;
@property (retain, nonatomic) UIImageView *scopeImageView;
@property (nonatomic) double minimumHeight;
@property (nonatomic) unsigned long long checkmarkStyle;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, nonatomic) UILabel *scopeLabel;
@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *mainDetailLabel;
@property (retain, nonatomic) UIImage *scopeImage;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_checkmarkImage;
- (void)layoutSubviews;
- (void)_setupViews;
- (void).cxx_destruct;
- (id)_newLabel;
- (void)_setupLayout;
- (id)_checkmarkImageView;
- (id)_checkmarkCircleImage;
- (id)_checkmarkCircleImageViewChecked:(BOOL)a0;
- (id)_circleImage;
- (id)_clearImage;
- (BOOL)_isLTR;
- (id)_selectedCheckmarkCircleImageView;
- (void)_setCheckMarkStyleLeadingChecked:(BOOL)a0;
- (void)_setCheckmarkStyleTrailingChecked:(BOOL)a0;
- (void)_setSeparatorIndentToMainLabel;
- (void)_setupScopeImageView;
- (id)_unselectedCheckmarkCircleImageView;

@end
