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

- (id)scrollView;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)viewDidLoad;
- (id)printer;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canSwipeToDismiss;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customEdgeInsets;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canClickToToggleFullscreen;
- (BOOL)canPinchToDismiss;
- (BOOL)canToggleFullScreen;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (id)registeredKeyCommands;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (BOOL)_documentAttributesContainTextColors:(id)a0;
- (BOOL)_isContentPotentiallySuspicious:(id)a0 context:(id)a1;
- (void)_keyboardWillAppear:(id)a0;
- (void)_keyboardWillDisappear:(id)a0;
- (void)_setupTextViewColorsWithDocumentAttributes:(id)a0;
- (void)_updateConstraintConstants:(BOOL)a0;
- (void)_updateViewConstraintsFromKeyboardAppearanceInfo:(id)a0 notificationName:(id)a1;
- (void)numberOfPagesWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)pdfDataForPageAtIndex:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id /* block */)a0;

@end
