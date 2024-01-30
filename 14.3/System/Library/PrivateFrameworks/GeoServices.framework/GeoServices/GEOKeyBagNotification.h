@interface GEOKeyBagNotification : NSObject {
    int _currentState;
    int _notifyToken;
}

@property (class, readonly, nonatomic) GEOKeyBagNotification *sharedObject;

@property (readonly, nonatomic) int state;

- (id)init;
- (void)updateState;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (BOOL)addDataDidBecomeAvailableObserver:(id)a0 ifTypeIsNotCurrentlyAccessible:(unsigned long long)a1;
- (void)_statusChanged;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;

@end
