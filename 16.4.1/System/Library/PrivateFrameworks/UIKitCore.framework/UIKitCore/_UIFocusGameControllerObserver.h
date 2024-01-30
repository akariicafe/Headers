@interface _UIFocusGameControllerObserver : _UIFocusStateObserver {
    struct __IOHIDManager { } *_hidManager;
}

- (void)dealloc;
- (BOOL)isActive;
- (void)_registerObserver;
- (id)init;
- (void)_unregisterObserver;

@end
