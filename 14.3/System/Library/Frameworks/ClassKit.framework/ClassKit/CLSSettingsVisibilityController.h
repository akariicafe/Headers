@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)unlock;
- (void)currentUserDidChange:(id)a0;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)settingsUIVisible;
- (id)cachedCurrentUserAppleID;
- (id)currentUser;

@end
