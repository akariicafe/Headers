@class AAUIPaneHeaderView, UIScrollView, AAUICodeEntryContext, UIButton;

@interface AAUICodeEntryPane : DevicePINPane {
    AAUICodeEntryContext *_context;
    double _keyboardOffset;
    UIScrollView *_containerView;
    AAUIPaneHeaderView *_headerView;
    UIButton *_footerButton;
}

- (void)layoutSubviews;
- (void)_layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)headerView;
- (void)setContext:(id)a0;
- (BOOL)_isSmallScreen;
- (void)_layoutContainerView;
- (void)dealloc;
- (id)_createFooterButton;
- (void)_startListeningForKeyboardEvents;
- (void)_keyboardLayoutChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_availableHeaderRect;
- (double)keyboardHeightOffset;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (double)_desiredMinPinHeight;
- (void)_didFinishResizingHeaderView;
- (BOOL)_isVerySmallScreen;
- (void)_didFinishResizingPinView;
- (void)handleEscapeAction:(id)a0;

@end
