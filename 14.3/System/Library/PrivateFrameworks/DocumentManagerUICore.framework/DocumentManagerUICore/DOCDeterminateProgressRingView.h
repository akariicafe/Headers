@class CALayer;

@interface DOCDeterminateProgressRingView : UIView {
    CALayer *_squareLayer;
}

@property (nonatomic) double progress;
@property (nonatomic) BOOL canShowStopButton;

+ (Class)layerClass;

- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateShapePath;

@end
