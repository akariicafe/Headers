@class UIColor, UIFont, NSMutableString, NSString, UITextInputPasswordRules, NSMutableArray, SKUIViewElement;

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {
    NSMutableArray *_labels;
    BOOL _needsLabelReload;
    SKUIViewElement *_viewElement;
}

@property (copy, nonatomic) UIColor *boxBackgroundColor;
@property (copy, nonatomic) UIColor *boxBorderColor;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfCharacters;
@property (copy, nonatomic) NSMutableString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (double)_defaultBoxSizeForFont:(id)a0;

- (void)layoutSubviews;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)tintColorDidChange;
- (BOOL)becomeFirstResponder;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_reloadLabelSubviews;
- (void)_setNeedsReloadLayout;
- (void)_sendValueChangeEvents;

@end
