@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {
    UIScrollView *_containerView;
    CDPPaneHeaderView *_headerView;
    double _keyboardOffset;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } availableHeaderRect;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (id)headerView;
- (void)dealloc;
- (BOOL)isSmallScreen;
- (void)layoutSubviews;
- (void)_layoutContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)desiredMinPinHeight;
- (void)startListeningForKeyboardEvents;
- (void)_keyboardLayoutChanged;
- (double)keyboardHeightOffset;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)didFinishResizingHeaderView;
- (BOOL)isVerySmallScreen;
- (void)didFinishResizingPinView;

@end
