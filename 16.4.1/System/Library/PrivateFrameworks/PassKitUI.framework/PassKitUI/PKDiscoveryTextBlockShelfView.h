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

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_attributedStringForBody:(id)a0 lede:(id)a1 headerline:(id)a2;
- (id)_textColorForBody;
- (id)_textColorForHeaderline;
- (id)_textColorForLede;
- (id)_uiFontTextStyle;
- (id)initWithShelf:(id)a0;

@end
