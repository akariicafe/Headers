@interface GEOKeyBagNotification : NSObject {
    int _currentState;
    int _notifyToken;
}

@property (class, readonly, nonatomic) GEOKeyBagNotification *sharedObject;

@property (readonly, nonatomic) int state;

+ (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;

- (void)updateState;
- (void)removeObserver:(id)a0;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;
- (id)init;
- (BOOL)addDataDidBecomeAvailableObserver:(id)a0 ifTypeIsNotCurrentlyAccessible:(unsigned long long)a1;
- (void)dealloc;
- (void)_statusChanged;

@end
