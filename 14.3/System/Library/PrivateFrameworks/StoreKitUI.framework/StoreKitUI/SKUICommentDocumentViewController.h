@class NSString, NSArray, SKUIViewElementLayoutContext, SKUIStackDocumentViewController, SKUIMediaSocialAuthor, NSMutableSet, SKUICommentPostBarView, SKUIStackTemplateElement, SKUICommentTemplateViewElement, SKUILayoutCache;

@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController> {
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    SKUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    BOOL _didShowKeyboard;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardRect;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SKUICommentPostBarView *_postView;
    BOOL _scrollNewCommentToView;
    long long _selectedCommenter;
    SKUIStackTemplateElement *_stackTemplateElement;
    SKUICommentTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_layoutContext;
- (void)_keyboardWillShowNotification:(id)a0;
- (id)_backgroundColor;
- (void)_keyboardWillChangeFrameNotification:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)documentDidUpdate:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (BOOL)_loadImageForURL:(id)a0 cacheKey:(id)a1 dataConsumer:(id)a2 reason:(long long)a3;
- (void)commentPostBarView:(id)a0 text:(id)a1 as:(id)a2;
- (void)commentPostBarView:(id)a0 changeCommenter:(id)a1;
- (void)_keyboardDidHideChangeNotification:(id)a0;
- (void)_keyboardWillHideNotification:(id)a0;
- (void)updateStackElement:(id)a0 withView:(id)a1;
- (void)_layoutScrollView:(double)a0;
- (void)_checkAdminStatus;
- (void)_layoutKeyboard;
- (void)_reloadContentSize:(double)a0;
- (id)_getSelectedCommenter;
- (void)_changeCommenter;
- (void)_setSelectedCommenter:(long long)a0;
- (void)_keyboardWillChangeNotification:(id)a0 accountForGuideLines:(BOOL)a1 applyKeyboardOffset:(BOOL)a2;
- (void)_preloadCommenterImages;

@end
