@class NSAttributedString, UITextView;

@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell {
    UITextView *_bodyTextView;
}

@property (copy, nonatomic) NSAttributedString *body;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_addSubviews;
- (void)_setUpViews;

@end
