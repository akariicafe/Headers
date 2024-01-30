@class UILayoutGuide, UIImageView, NSLayoutConstraint, UILabel;

@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *leadingCheckmarkView;
@property (readonly, nonatomic) UILayoutGuide *mainGuide;
@property (readonly, nonatomic) UILayoutGuide *mainLabelFirstLineGuide;
@property (readonly, nonatomic) UILayoutGuide *scopeLabelFirstLineGuide;
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *mainLabelLeadingConstraint;
@property (nonatomic) unsigned long long internalCheckmarkStyle;
@property (nonatomic, getter=internalIsChecked) BOOL internalChecked;
@property (nonatomic) double minimumHeight;
@property (nonatomic) unsigned long long checkmarkStyle;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, nonatomic) UILabel *scopeLabel;
@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *mainDetailLabel;

- (void)_setupViews;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)_isLTR;
- (void).cxx_destruct;
- (id)_newLabel;
- (id)_checkmarkImage;
- (void)layoutSubviews;
- (id)_checkmarkImageView;
- (void)_setupLayout;
- (void)_setSeparatorIndentToMainLabel;
- (id)_clearImage;
- (void)_setCheckMarkStyleLeadingChecked:(BOOL)a0;
- (void)_setCheckmarkStyleTrailingChecked:(BOOL)a0;
- (id)_checkmarkCircleImageViewChecked:(BOOL)a0;
- (id)_selectedCheckmarkCircleImageView;
- (id)_unselectedCheckmarkCircleImageView;
- (id)_checkmarkCircleImage;
- (id)_circleImage;

@end
