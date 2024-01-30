@class NSString, UIColor, UITextView;

@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell <UITextViewDelegate> {
    BOOL _isTemplateLayout;
    UITextView *_textView;
}

@property (nonatomic) BOOL useLargeBottomInset;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) unsigned int horizontalAlignment;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;

- (void)_updateText;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)_isLinkRangeValid;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createSubviews;
- (void)resetFonts;

@end
