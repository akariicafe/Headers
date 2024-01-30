@class UITextView, NSString, PKDiscoveryTextBlockShelf, NSAttributedString;

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView <UITextViewDelegate> {
    UITextView *_textView;
    PKDiscoveryTextBlockShelf *_shelf;
    NSAttributedString *_attributedText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithShelf:(id)a0;
- (id)_attributedStringForBody:(id)a0 lede:(id)a1 headerline:(id)a2;
- (id)_uiFontTextStyle;
- (id)_textColorForBody;
- (id)_textColorForLede;
- (id)_textColorForHeaderline;

@end
