@interface STDeviceUnlockStateListener : NSObject {
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ lockStateChangeHandler;
@property (readonly, nonatomic) BOOL deviceIsLocked;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
