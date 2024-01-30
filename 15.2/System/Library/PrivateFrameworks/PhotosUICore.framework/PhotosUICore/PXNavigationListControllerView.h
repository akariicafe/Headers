@class UIView;

@interface PXNavigationListControllerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double contentViewHeight;

- (void)addSubview:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateContentViewFrame;

@end
