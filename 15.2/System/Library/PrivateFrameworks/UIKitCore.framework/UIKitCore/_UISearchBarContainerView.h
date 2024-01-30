@class UIView;

@interface _UISearchBarContainerView : UIView {
    UIView *_subview;
    int _resizingMask;
    BOOL _shouldSendContainerSafeAreaInsetsDidChange;
}

- (void)layoutSubviews;
- (void)_addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)safeAreaInsetsDidChange;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didRemoveSubview:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willRemoveSubview:(id)a0;
- (void).cxx_destruct;
- (void)enforceSubviewAtBottomIfNecessary;
- (void)_uncontainerSubview:(id)a0;

@end
