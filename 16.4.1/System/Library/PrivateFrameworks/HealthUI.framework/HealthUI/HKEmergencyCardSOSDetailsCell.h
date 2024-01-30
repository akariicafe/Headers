@class NSString, UITextView, NSAttributedString;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *footerTextView;
@property (copy, nonatomic) NSAttributedString *footerAttributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateText;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_setupConstraints;
- (void)tintColorDidChange;
- (void)_setupViews;
- (void).cxx_destruct;

@end
