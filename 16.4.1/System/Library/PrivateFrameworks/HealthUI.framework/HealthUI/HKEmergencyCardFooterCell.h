@class NSString, UITextView, NSAttributedString;

@interface HKEmergencyCardFooterCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *footerTextView;
@property (retain, nonatomic) NSAttributedString *footerTextViewString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFooterText:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)setupConstraints;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setupViews;
- (void)_updateTextColor;
- (void)setTextViewDelegate:(id)a0;

@end
