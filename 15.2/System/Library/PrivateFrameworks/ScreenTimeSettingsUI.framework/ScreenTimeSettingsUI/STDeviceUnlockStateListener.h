@interface STDeviceUnlockStateListener : NSObject {
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ lockStateChangeHandler;
@property (readonly, nonatomic) BOOL deviceIsLocked;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
