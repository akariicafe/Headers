@class _TVRButtonHaptic, TVRTouchProcessor;

@interface TVRTouchpadView : UIView

@property (weak, nonatomic) TVRTouchProcessor *touchProcessor;
@property (retain, nonatomic) _TVRButtonHaptic *haptic;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) id /* block */ configurationHandler;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_notifyConfigurationHandler:(BOOL)a0;

@end
