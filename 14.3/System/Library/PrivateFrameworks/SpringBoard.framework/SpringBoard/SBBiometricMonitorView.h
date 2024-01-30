@class UIView;

@interface SBBiometricMonitorView : UIView {
    UIView *_stateView;
    UIView *_presenceView;
    UIView *_poseView;
}

@property (nonatomic) long long matchState;
@property (nonatomic) long long presenceDetectState;
@property (nonatomic) long long poseState;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
