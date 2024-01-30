@class NSString, NSMutableDictionary, LSObserver;

@interface _EXDiscoveryController : NSObject <LSObserverDelegate>

@property (retain) NSMutableDictionary *activeQueries;
@property (retain) LSObserver *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)observerDidObserveDatabaseChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)currentProcessCanRunQuery:(id)a0 error:(id *)a1;
- (id)extensionsMatchingQuery:(id)a0;
- (void)addActiveQueryObserver:(id)a0 query:(id)a1;
- (void)removeActiveQueryObserver:(id)a0 query:(id)a1;
- (id)extensionsMatchingQueries:(id)a0;

@end
