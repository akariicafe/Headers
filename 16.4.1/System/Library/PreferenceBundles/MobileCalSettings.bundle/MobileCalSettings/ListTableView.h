@class UIWindow;

@interface ListTableView : UITableView {
    BOOL _layoutOnJoiningViewHierarchy;
    UIWindow *_lastKnownWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
