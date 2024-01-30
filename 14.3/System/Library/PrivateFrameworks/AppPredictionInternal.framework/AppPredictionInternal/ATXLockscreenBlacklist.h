@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)blacklist;
- (void)dealloc;
- (BOOL)isPredictionGloballyDisabled;

@end
