@class NSMutableArray, IMDispatchTimer;

@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMDispatchTimer *_purgeTimer;
    id /* block */ _purgeCancelBlock;
    id /* block */ _purgeEnqueueBlock;
}

+ (id)sharedInstance;
+ (id)keychainServiceForVersion:(unsigned long long)a0;
+ (id)keychainAccessGroupForVersion:(unsigned long long)a0;
+ (id)keychainAccountForVersion:(unsigned long long)a0;

- (void)flushCache;
- (void)_flush;
- (void)_reloadFromKeychainLocked;
- (void)_reloadFromDictionaryLocked:(id)a0;
- (void)dealloc;
- (id)registrationData;
- (id)init;
- (id)registrationWithServiceType:(id)a0 accountType:(int)a1 isTemporary:(BOOL)a2 value:(id)a3;
- (void).cxx_destruct;
- (void)_setPurgeTimer;

@end
