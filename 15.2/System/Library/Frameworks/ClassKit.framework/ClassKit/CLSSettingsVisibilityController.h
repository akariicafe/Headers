@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)currentUserDidChange:(id)a0;
- (void)unlock;
- (id)currentUser;
- (void)lock;
- (id)cachedCurrentUserAppleID;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)settingsUIVisible;

@end
