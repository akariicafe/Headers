@class NSString, NSMutableDictionary, NSHashTable, DNDState;

@interface ATXHeuristicResultCache : NSObject <DNDStateUpdateListener> {
    NSMutableDictionary *_cache;
    NSHashTable *_expirerInternTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    DNDState *_doNotDisturbState;
    int _appRefreshToken;
    int _significantTimeToken;
    int _learnRefreshToken;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedPassLibrary;
+ (id)addDNDStateUpdateListener;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (id)_internExpirerLocked:(id)a0;
- (BOOL)isDNDActiveWithError:(id *)a0;
- (id)objectForKey:(id)a0 found:(BOOL *)a1;
- (void)expire:(id)a0;
- (void)_expire:(id)a0 postNotification:(BOOL)a1;
- (id)heuristicsCached;
- (void)dealloc;
- (id)firstExpirationDate;
- (void)setObject:(id)a0 expirers:(id)a1 forKey:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)expireAll;

@end
