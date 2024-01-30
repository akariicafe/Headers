@class NSString, PDFKitTextViewPrivate;

@interface PDFKitTextView : NSObject <UITextViewDelegate> {
    PDFKitTextViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void)_setup;
- (void).cxx_destruct;
- (id)annotation;
- (id)layer;
- (void)_keyboardWillShow:(id)a0;
- (void)removeFromSuperview;
- (void)_keyboardWillHide:(id)a0;
- (id)textView;
- (void)_setFont:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)_setAlignment:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAnnotation:(id)a0 pdfPageView:(id)a1 pdfView:(id)a2;
- (void)_textWidgetDone;
- (void)_setString:(id)a0;
- (void)_setFontColor:(id)a0;
- (void)_setAttributedString:(id)a0;
- (void)rotateByAngle:(double)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;

@end
