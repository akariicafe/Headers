@class GCDeviceCursor, NSArray, UIWindow, NSMutableArray, GCControllerButtonInput;

@interface GCMouseInput : GCPhysicalInputProfile {
    BOOL _isActive;
    BOOL _wasInitialized;
    long long _buttons;
    NSMutableArray *_auxiliaryButtons;
    UIWindow *_window;
    id /* block */ _mouseMovedHandlerPrivate;
    id /* block */ _mouseButtonPressedPrivate;
}

@property (copy, nonatomic) id /* block */ mouseMovedHandler;
@property (readonly, nonatomic) GCDeviceCursor *scroll;
@property (readonly, nonatomic) GCControllerButtonInput *leftButton;
@property (readonly, nonatomic) GCControllerButtonInput *rightButton;
@property (readonly, nonatomic) GCControllerButtonInput *middleButton;
@property (readonly, nonatomic) NSArray *auxiliaryButtons;

- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)name;
- (id)initWithController:(id)a0;
- (void)appDidBecomeActive;
- (id)productCategory;
- (void)appWillResignActive;
- (id /* block */)mouseMovedHandlerPrivate;
- (void)_handleEventImpl:(struct __IOHIDEvent { } *)a0;
- (BOOL)shouldAcceptMouseEvents;
- (id /* block */)mouseButtonPressedPrivate;
- (BOOL)_handleEventRec:(struct __IOHIDEvent { } *)a0;
- (void)_handleDigitizerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handlePointerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleButtonEvent:(long long)a0;
- (void)_handleScrollEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)setMouseMovedHandlerPrivate:(id /* block */)a0;
- (void)setMouseButtonPressedPrivate:(id /* block */)a0;
- (void)_fireMouseMovedWithQueue:(id)a0 deltaX:(float)a1 deltaY:(float)a2;
- (long long)_mouseButtons;

@end
