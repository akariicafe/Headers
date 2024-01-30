@class UIColor;

@interface _TVProgressBarView : UIView

@property (nonatomic) double cornerRadius;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *completeTintColor;
@property (nonatomic) BOOL useMaterial;
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setgradientEndColor:(id)a0;

@end
