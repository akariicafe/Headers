@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (id)init;
- (void)dealloc;
- (id)currentUser;
- (void)lock;
- (id)cachedCurrentUserAppleID;
- (void)unlock;
- (BOOL)settingsUIVisible;
- (void).cxx_destruct;
- (void)currentUserDidChange:(id)a0;

@end
