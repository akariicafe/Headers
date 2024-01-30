@class CNRepeatingGradientSeparatorView, UITextField, NSString;

@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell <NUIContainerViewDelegate>

@property (retain, nonatomic) UITextField *textFieldLeft;
@property (retain, nonatomic) UITextField *textFieldRight;
@property (retain, nonatomic) CNRepeatingGradientSeparatorView *separator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (Class)containerViewClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)textAttributes;
- (id)newSeparatorView;
- (void)setTextAttributes:(id)a0;
- (void).cxx_destruct;
- (id)textFields;
- (void)setupTextFields;

@end
