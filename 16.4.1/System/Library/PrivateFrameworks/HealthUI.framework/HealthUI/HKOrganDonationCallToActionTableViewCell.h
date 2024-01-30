@class UITextView, NSString, UIButton, UIView, NSAttributedString, UILabel;

@interface HKOrganDonationCallToActionTableViewCell : UITableViewCell <UITextViewDelegate>

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (readonly, nonatomic) NSAttributedString *callToActionTextViewString;
@property (retain, nonatomic) UIView *spacerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *callToActionTextView;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
