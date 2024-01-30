@class GCController, UIView, GCControllerButtonInputView, GCControllerDpadInputView, GCControllerThumbstickInputView;

@interface GCControllerView : UIView {
    UIView *_leftSide;
    UIView *_rightSide;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
}

@property (retain, nonatomic) GCControllerButtonInputView *buttonA;
@property (retain, nonatomic) GCControllerButtonInputView *buttonB;
@property (retain, nonatomic) GCControllerButtonInputView *buttonX;
@property (retain, nonatomic) GCControllerButtonInputView *buttonY;
@property (retain, nonatomic) GCControllerDpadInputView *dpad;
@property (retain, nonatomic) GCControllerThumbstickInputView *leftThumbstick;
@property (retain, nonatomic) GCControllerThumbstickInputView *rightThumbstick;
@property (retain, nonatomic) GCControllerButtonInputView *leftShoulder;
@property (retain, nonatomic) GCControllerButtonInputView *rightShoulder;
@property (retain, nonatomic) GCControllerButtonInputView *leftTrigger;
@property (retain, nonatomic) GCControllerButtonInputView *rightTrigger;
@property (retain, nonatomic) GCController *controller;

- (void)unpublish;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)dealloc;
- (void)publish;
- (void)applyPhoneOrientation:(long long)a0;
- (void)applyPadOrientation;
- (void)orientationChanged;
- (void)setupSide:(id)a0 thumbstick:(id)a1 buttons:(id)a2;
- (id)getUIControlForName:(id)a0;
- (void)ensureController;
- (void)assignInputElements;
- (void)setupPositions;
- (id)getConfigurationForElement:(id)a0;
- (void)setConfigurationForElement:(id)a0 configuration:(id)a1;

@end
