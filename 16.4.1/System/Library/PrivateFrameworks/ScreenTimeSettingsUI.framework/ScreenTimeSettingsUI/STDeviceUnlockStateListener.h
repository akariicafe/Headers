@interface STDeviceUnlockStateListener : NSObject {
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ lockStateChangeHandler;
@property (readonly, nonatomic) BOOL deviceIsLocked;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
