@class UIColor, NSString, NSArray, UITextView;

@interface PKMultiHyperlinkView : UIView <UITextViewDelegate> {
    UITextView *_textView;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSArray *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (BOOL)_isLinkRangeValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
