@class UILabel, NSString, UIStackView;

@interface MCProfileTitlePageOrganizationCell : UITableViewCell <MCUIScrollAnimationResponder>

@property (retain, nonatomic) UILabel *organizationLabel;
@property (retain, nonatomic) UILabel *appleIDLabel;
@property (retain, nonatomic) UILabel *organizationValueLabel;
@property (retain, nonatomic) UILabel *appleIDValueLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *appleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_createHorizontalStackWithViews:(id)a0;
- (id)_createLabelLabel;
- (id)_createValueLabel;
- (id)_createVerticalStackWithViews:(id)a0;
- (void)_updateConstraintWithStack:(id)a0;
- (void)updateProgressWithTranslationDistance:(double)a0 referenceDistance:(double)a1 isScrolling:(BOOL)a2;

@end
