@class TUIPredictionViewStackContentView;

@interface TUIPredictionViewStackView : UIView

@property (retain, nonatomic) TUIPredictionViewStackContentView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentMargin;
@property (nonatomic) long long layoutDirection;

- (void).cxx_destruct;
- (long long)_layoutTypeForSubview:(id)a0;
- (id)subStackViews;
- (void)layoutSubviews;
- (id)visibleCells;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)arrangedSubviews;
- (id)allVisibleCells;
- (void)addArrangedSubview:(id)a0;

@end
