@class CPSMultilineLabel, UIView;

@interface DBInCallWidgetMultiwayTitleButton : UIButton

@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) CPSMultilineLabel *multilineTitleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
