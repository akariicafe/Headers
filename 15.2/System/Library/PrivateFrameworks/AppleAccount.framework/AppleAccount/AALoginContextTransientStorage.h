@class NSLock;

@interface AALoginContextTransientStorage : NSObject {
    BOOL _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;

- (void)clear;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_saveNonsensitiveParameters:(id)a0;
- (void)_saveKeychainItem:(id)a0 forUsername:(id)a1 service:(id)a2;
- (id)storedContext;
- (id)_readNonsensitiveParameters;
- (id)_keychainItemForUsername:(id)a0 service:(id)a1;
- (void)_deleteKeychainItemForUsername:(id)a0 service:(id)a1;

@end
