@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;

- (id)blacklist;
- (BOOL)isPredictionGloballyDisabled;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
