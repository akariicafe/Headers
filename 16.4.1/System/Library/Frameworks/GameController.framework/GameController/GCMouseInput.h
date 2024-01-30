@class GCDeviceCursor, NSArray, GCController, UIWindow, NSMutableArray, GCControllerButtonInput;

@interface GCMouseInput : GCPhysicalInputProfile {
    GCController *_controller;
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

- (void)setController:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithController:(id)a0;
- (id)handlerQueue;
- (id)controller;
- (void).cxx_destruct;
- (id)name;
- (void)appDidBecomeActive;
- (id)productCategory;
- (void)_handleButtonEvent:(long long)a0;
- (void)_fireMouseMovedWithQueue:(id)a0 deltaX:(float)a1 deltaY:(float)a2;
- (void)_handleDigitizerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleEventImpl:(struct __IOHIDEvent { } *)a0;
- (BOOL)_handleEventRec:(struct __IOHIDEvent { } *)a0;
- (void)_handlePointerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleScrollEvent:(struct CGPoint { double x0; double x1; })a0;
- (long long)_mouseButtons;
- (void)appWillResignActive;
- (id /* block */)mouseButtonPressedPrivate;
- (id /* block */)mouseMovedHandlerPrivate;
- (void)setMouseButtonPressedPrivate:(id /* block */)a0;
- (void)setMouseMovedHandlerPrivate:(id /* block */)a0;
- (BOOL)shouldAcceptMouseEvents;

@end
