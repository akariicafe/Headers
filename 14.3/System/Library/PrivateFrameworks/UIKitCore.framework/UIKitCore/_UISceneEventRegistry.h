@class UIHoverEvent, UIPhysicalKeyboardEvent, UIScrollEvent, UITransformEvent, UIPressesEvent, _UIGameControllerEvent, UIWheelEvent, UIMoveEvent, UIPencilEvent, UITouchesEvent;

@interface _UISceneEventRegistry : NSObject {
    UIMoveEvent *_moveEvent;
    UITouchesEvent *_touchesEvent;
    UIPressesEvent *_pressesEvent;
    UIWheelEvent *_wheelEvent;
    _UIGameControllerEvent *_gameControllerEvent;
    UIPhysicalKeyboardEvent *_physicalKeyboardEvent;
    UIPencilEvent *_pencilEvent;
    UIScrollEvent *_scrollEvent;
    UIHoverEvent *_hoverEvent;
    UITransformEvent *_transformEvent;
}

- (void).cxx_destruct;

@end
