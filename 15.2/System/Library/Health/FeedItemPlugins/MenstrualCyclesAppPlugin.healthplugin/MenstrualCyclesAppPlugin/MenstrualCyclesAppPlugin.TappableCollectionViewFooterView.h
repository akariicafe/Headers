@interface MenstrualCyclesAppPlugin.TappableCollectionViewFooterView : UICollectionReusableView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ footerTextView;
    void /* unknown type, empty encoding */ highlightedText;
    void /* unknown type, empty encoding */ tapCompletion;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;

@end
