@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {
    UIScrollView *_containerView;
    CDPPaneHeaderView *_headerView;
    double _keyboardOffset;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } availableHeaderRect;

- (void)layoutSubviews;
- (void)_layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isSmallScreen;
- (void).cxx_destruct;
- (id)headerView;
- (void)_layoutContainerView;
- (void)dealloc;
- (void)_keyboardLayoutChanged;
- (double)keyboardHeightOffset;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)didFinishResizingHeaderView;
- (double)desiredMinPinHeight;
- (void)didFinishResizingPinView;
- (void)startListeningForKeyboardEvents;
- (BOOL)isVerySmallScreen;

@end
