@class NSMutableDictionary, NSString, NSObject, LSObserver;
@protocol OS_dispatch_queue;

@interface _EXDiscoveryController : NSObject <LSObserverDelegate>

@property (retain) NSMutableDictionary *activeQueries;
@property (retain) LSObserver *observer;
@property (retain) id settingsStoreToken;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } activeQueriesLock;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)canRunQuery:(id)a0 error:(id *)a1;

- (void)observerDidObserveSettingsChange;
- (id)extensionsMatchingQueries:(id)a0;
- (id)extensionsMatchingQuery:(id)a0;
- (void)addActiveQueryObserver:(id)a0 query:(id)a1;
- (void)observerDidObserveDatabaseChange:(id)a0;
- (id)init;
- (void)removeActiveQueryObserver:(id)a0 query:(id)a1;
- (void).cxx_destruct;

@end
