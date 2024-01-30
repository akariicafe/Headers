@class NSString;

@interface GameCenterUI.GKDashboardShowMoreFooterView : UICollectionReusableView {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ showMoreText;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) NSString *showMoreText;
@property (nonatomic, readonly) BOOL canBecomeFocused;

- (void)layoutSubviews;
- (void)didTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
