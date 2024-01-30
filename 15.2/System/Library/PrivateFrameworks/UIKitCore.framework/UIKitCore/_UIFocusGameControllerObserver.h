@interface _UIFocusGameControllerObserver : _UIFocusStateObserver {
    struct __IOHIDManager { } *_hidManager;
}

- (BOOL)isActive;
- (void)_registerObserver;
- (id)init;
- (void)dealloc;
- (void)_unregisterObserver;

@end
