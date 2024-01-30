@class AAUIPaneHeaderView, UIScrollView, AAUICodeEntryContext, UIButton;

@interface AAUICodeEntryPane : DevicePINPane {
    AAUICodeEntryContext *_context;
    double _keyboardOffset;
    UIScrollView *_containerView;
    AAUIPaneHeaderView *_headerView;
    UIButton *_footerButton;
}

- (void)_layoutSubviews;
- (void)setContext:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)headerView;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layoutContainerView;
- (BOOL)_isSmallScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_availableHeaderRect;
- (id)_createFooterButton;
- (double)_desiredMinPinHeight;
- (void)_didFinishResizingHeaderView;
- (void)_didFinishResizingPinView;
- (BOOL)_isVerySmallScreen;
- (void)_keyboardLayoutChanged;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)_startListeningForKeyboardEvents;
- (void)handleEscapeAction:(id)a0;
- (double)keyboardHeightOffset;

@end
