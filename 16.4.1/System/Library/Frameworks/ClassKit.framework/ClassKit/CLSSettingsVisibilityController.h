@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)lock;
- (id)cachedCurrentUserAppleID;
- (id)currentUser;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (void)currentUserDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)settingsUIVisible;

@end
