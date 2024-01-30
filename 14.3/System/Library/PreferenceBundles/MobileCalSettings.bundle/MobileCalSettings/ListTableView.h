@class UILabel, UIWindow;
@protocol ListTableViewDelegate;

@interface ListTableView : UITableView {
    UILabel *_noContentView;
    BOOL _layoutOnJoiningViewHierarchy;
    UIWindow *_lastKnownWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
}

@property (weak, nonatomic) id<ListTableViewDelegate> listViewDelegate;
@property (nonatomic) BOOL showsNoContentString;
@property (nonatomic) BOOL noContentAvoidsKeyboard;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)keyboardFrameChanged:(id)a0;
- (void)setInitialKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
