@class IMTimer, NSMutableArray;

@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    id /* block */ _purgeCancelBlock;
    id /* block */ _purgeEnqueueBlock;
}

+ (id)sharedInstance;
+ (id)keychainServiceForVersion:(unsigned long long)a0;
+ (id)keychainAccountForVersion:(unsigned long long)a0;
+ (id)keychainAccessGroupForVersion:(unsigned long long)a0;

- (void)_reloadFromKeychainLocked;
- (id)registrationData;
- (void)_setPurgeTimer;
- (void).cxx_destruct;
- (void)_reloadFromDictionaryLocked:(id)a0;
- (void)flushCache;
- (id)init;
- (void)_flush;
- (id)registrationWithServiceType:(id)a0 accountType:(int)a1 isTemporary:(BOOL)a2 value:(id)a3;
- (void)dealloc;

@end
