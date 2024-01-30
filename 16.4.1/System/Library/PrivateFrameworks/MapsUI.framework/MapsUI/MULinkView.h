@class NSString, NSAttributedString, UITextView;

@interface MULinkView : UIView <UITextViewDelegate> {
    UITextView *_textView;
}

@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) unsigned long long numberOfLines;
@property (copy, nonatomic) id /* block */ selectionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTintColor;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)_setupLinkView;
- (void)_updateForButtonShapeStatusChange;

@end
