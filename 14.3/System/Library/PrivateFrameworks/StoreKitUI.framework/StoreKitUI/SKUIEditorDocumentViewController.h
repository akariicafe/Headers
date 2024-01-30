@class NSString, SKUIViewElementLayoutContext, SKUIEditorTemplateViewElement, SKUIButtonViewElement, SKUIEditorTemplateView;

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController> {
    SKUIButtonViewElement *_doneButtonElement;
    SKUIEditorTemplateView *_editorView;
    BOOL _isTextChanged;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIButtonViewElement *_resetButtonElement;
    SKUIEditorTemplateViewElement *_templateElement;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toolbarFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_keyboardWillShow:(id)a0;
- (void)dealloc;
- (void)_doneButtonAction;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)_keyboardWillHide:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_layoutContext;
- (void)_keyboardWillChangeFrame:(id)a0;
- (void)_cancelButtonAction;
- (id)_backgroundColor;
- (void)viewWillLayoutSubviews;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (void)didChangeTextInEditorTemplateView:(id)a0;
- (void)_sendDoneEventAndDismissWithText:(id)a0;
- (void)_updateBiographyWithText:(id)a0 onCompletion:(id /* block */)a1;
- (void)_sendCancelEventAndDismiss;
- (void)_updateEditorViewInset;
- (void)_layoutNavigation;
- (void)_layoutEditorView;
- (void)_resetButtonAction;
- (void)_resetTextView;
- (void)_authenticateOnCompletion:(id /* block */)a0;
- (id)_locateFirstButtonWithType:(long long)a0 inChildrenOfElement:(id)a1;

@end
