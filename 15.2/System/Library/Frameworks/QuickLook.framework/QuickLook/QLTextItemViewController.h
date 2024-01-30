@class UITextView, UISimpleTextPrintFormatter, NSString, NSLayoutConstraint, UIPrintPageRenderer, NSAttributedString;

@interface QLTextItemViewController : QLItemViewController <UITextViewDelegate, QLPrintingProtocol> {
    UITextView *_textView;
    NSAttributedString *_content;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property (readonly) UISimpleTextPrintFormatter *printFormatter;
@property (readonly) UIPrintPageRenderer *pageRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)printer;
- (id)scrollView;
- (void).cxx_destruct;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)_updateConstraintConstants:(BOOL)a0;
- (void)numberOfPagesWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)pdfDataForPageAtIndex:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id /* block */)a0;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (BOOL)canClickToToggleFullscreen;
- (BOOL)_isContentPotentiallySuspicious:(id)a0 context:(id)a1;
- (void)_setupTextViewColorsWithDocumentAttributes:(id)a0;
- (BOOL)_documentAttributesContainTextColors:(id)a0;
- (id)registeredKeyCommands;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (BOOL)canToggleFullScreen;

@end
