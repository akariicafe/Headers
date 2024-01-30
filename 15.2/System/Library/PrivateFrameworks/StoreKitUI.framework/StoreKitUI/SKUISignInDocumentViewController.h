@class NSString, SKUIViewElementLayoutContext, SKUILayoutCache, SKUISignInTemplateView, UIScrollView, SKUISignInTemplateViewElement;

@interface SKUISignInDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUISignInViewDelegate, SKUIDocumentViewController> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISignInTemplateView *_loginView;
    UIScrollView *_scrollView;
    SKUISignInTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillChangeFrame:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_layoutScrollView;
- (void)loadView;
- (void)_keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (id)_layoutContext;
- (void)dealloc;
- (id)_backgroundColor;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_reloadContentSize;
- (id)initWithTemplateElement:(id)a0;
- (void)_signInSuccess:(id)a0;
- (void)_signInFailed:(id)a0 error:(id)a1;
- (void)signInEntryComplete:(id)a0 accountName:(id)a1 password:(id)a2;

@end
