@class UITextView, _HKClinicalBulletedListLayoutManager, HKSource, NSLayoutConstraint;

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell

@property (readonly, nonatomic) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint;
@property (readonly, nonatomic) UITextView *contentsTextView;
@property (readonly, nonatomic) _HKClinicalBulletedListLayoutManager *bulletLayoutManager;
@property (weak, nonatomic) HKSource *source;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_localizedTitleString;
- (void)_setUpConstraints;
- (id)_titleParagraphStyle;
- (void)_updateForCurrentContentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setUpSubviews;
- (id)_createContentsTextViewWithLayoutManager:(id)a0;
- (id)_attributedTitleString;
- (id)_attributedStringForBulletAtIndex:(long long)a0;
- (id)_bodyEmph;
- (id)_bulletContentFont;
- (id)_bulletContentParagraphStyle;
- (id)_localizedBulletContentStringForBulletAtIndex:(long long)a0;
- (id)_attributedStringForBullet;
- (id)_bulletFont;
- (id)_attributedContentsTextViewStringForCurrentContentSizeCategory;

@end
