@class UIButton, UIView;

@interface MCProfileTitlePageView : MCSectionBasedTableView

@property (readonly, nonatomic) UIView *topBarView;
@property (readonly, nonatomic) UIView *bottomBarView;
@property (readonly, nonatomic) UIButton *installButton;
@property (readonly, nonatomic) UIButton *infoButton;
@property (readonly, nonatomic) UIButton *cancelButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createInstallButton;
- (id)_createCancelButton;
- (id)_createBottomView;
- (id)_createInfoButton;
- (void)showBottomView:(BOOL)a0 animated:(BOOL)a1;

@end
