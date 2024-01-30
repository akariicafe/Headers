@class NSLock;

@interface AALoginContextTransientStorage : NSObject {
    BOOL _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;

- (void)save:(id)a0;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (void)_deleteKeychainItemForUsername:(id)a0 service:(id)a1;
- (id)_keychainItemForUsername:(id)a0 service:(id)a1;
- (id)_readNonsensitiveParameters;
- (void)_saveKeychainItem:(id)a0 forUsername:(id)a1 service:(id)a2;
- (void)_saveNonsensitiveParameters:(id)a0;
- (id)storedContext;

@end
