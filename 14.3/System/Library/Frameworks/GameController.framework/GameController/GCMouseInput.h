@class GCDeviceCursor, NSArray, UIWindow, NSMutableArray, GCControllerButtonInput;

@interface GCMouseInput : GCPhysicalInputProfile {
    BOOL _isActive;
    BOOL _wasInitialized;
    long long _buttons;
    NSMutableArray *_auxiliaryButtons;
    UIWindow *_window;
}

@property (copy, nonatomic) id /* block */ mouseMovedHandler;
@property (readonly, nonatomic) GCDeviceCursor *scroll;
@property (readonly, nonatomic) GCControllerButtonInput *leftButton;
@property (readonly, nonatomic) GCControllerButtonInput *rightButton;
@property (readonly, nonatomic) GCControllerButtonInput *middleButton;
@property (readonly, nonatomic) NSArray *auxiliaryButtons;

- (void).cxx_destruct;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)name;
- (id)initWithController:(id)a0;
- (void)appDidBecomeActive;
- (id)productCategory;
- (void)appWillResignActive;
- (void)_handleEventImpl:(struct __IOHIDEvent { } *)a0;
- (BOOL)shouldAcceptMouseEvents;
- (BOOL)_handleEventRec:(struct __IOHIDEvent { } *)a0;
- (void)_handleDigitizerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handlePointerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleButtonEvent:(long long)a0;
- (void)_handleScrollEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_fireMouseMovedWithQueue:(id)a0 deltaX:(float)a1 deltaY:(float)a2;
- (long long)_mouseButtons;

@end
