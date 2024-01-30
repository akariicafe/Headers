@interface GEOKeyBagNotification : NSObject {
    int _currentState;
    int _notifyToken;
}

@property (class, readonly, nonatomic) GEOKeyBagNotification *sharedObject;

@property (readonly, nonatomic) int state;

+ (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;

- (BOOL)addDataDidBecomeAvailableObserver:(id)a0 ifTypeIsNotCurrentlyAccessible:(unsigned long long)a1;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;
- (void)_statusChanged;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)updateState;

@end
