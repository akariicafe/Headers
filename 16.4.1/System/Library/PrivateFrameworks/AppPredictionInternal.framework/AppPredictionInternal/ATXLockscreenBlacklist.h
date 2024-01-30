@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;

- (id)blacklist;
- (BOOL)isPredictionGloballyDisabled;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
