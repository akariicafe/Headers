@class NSString, PDFKitTextViewPrivate;

@interface PDFKitTextView : NSObject <UITextViewDelegate> {
    PDFKitTextViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)annotation;
- (id)textView;
- (void)_keyboardWillHide:(id)a0;
- (void)_setup;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)_setFont:(id)a0;
- (id)layer;
- (void)removeFromSuperview;
- (BOOL)becomeFirstResponder;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)_setAlignment:(long long)a0;
- (id)initWithAnnotation:(id)a0 pdfPageView:(id)a1 pdfView:(id)a2;
- (void)_textWidgetDone;
- (void)_setString:(id)a0;
- (void)_setFontColor:(id)a0;
- (void)_setAttributedString:(id)a0;
- (void)rotateByAngle:(double)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;

@end
