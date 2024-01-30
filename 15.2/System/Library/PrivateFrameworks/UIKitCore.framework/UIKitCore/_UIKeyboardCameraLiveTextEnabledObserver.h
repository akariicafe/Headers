@interface _UIKeyboardCameraLiveTextEnabledObserver : NSObject {
    BOOL _isLiveTextEnabledIsValid;
    BOOL _isLiveTextEnabled;
}

@property (class, readonly) _UIKeyboardCameraLiveTextEnabledObserver *sharedInstance;

@property (readonly) BOOL isLiveTextEnabled;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
