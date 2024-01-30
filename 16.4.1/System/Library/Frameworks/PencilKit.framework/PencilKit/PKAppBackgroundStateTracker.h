@interface PKAppBackgroundStateTracker : NSObject {
    _Atomic BOOL _inBackground;
    Class _applicationClass;
}

- (void)_updateState;
- (id)init;

@end
