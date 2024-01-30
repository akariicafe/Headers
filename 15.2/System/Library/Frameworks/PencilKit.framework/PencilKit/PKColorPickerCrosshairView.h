@class _PKColorPickerSimpleCrosshairView, _PKColorPickerCrosshairCornerMaskView;
@protocol PKColorPickerCrosshairViewDelegate;

@interface PKColorPickerCrosshairView : UIView

@property (nonatomic) unsigned long long cornerPosition;
@property (retain, nonatomic) _PKColorPickerSimpleCrosshairView *baseView;
@property (retain, nonatomic) _PKColorPickerCrosshairCornerMaskView *baseMaskView;
@property (retain, nonatomic) _PKColorPickerSimpleCrosshairView *cornerEdgeView;
@property (retain, nonatomic) _PKColorPickerCrosshairCornerMaskView *cornerEdgeMaskView;
@property (weak, nonatomic) id<PKColorPickerCrosshairViewDelegate> delegate;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (void).cxx_destruct;

@end
