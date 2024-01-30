@class HKObserverSet, NSArray, ASDAppQuery, NSString;
@protocol HKWatchAppAvailabilityObserver;

@interface HKWatchAppAvailability : NSObject <ASDAppQueryResultsObserver>

@property (retain, nonatomic) ASDAppQuery *query;
@property (retain, nonatomic) NSArray *_test_apps;
@property (retain, nonatomic) HKObserverSet<HKWatchAppAvailabilityObserver> *observers;
@property (nonatomic) long long installState;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 queue:(id)a1;
- (id)initWithBundleID:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;
- (void)appInstallStateOnWatch:(id)a0 completion:(id /* block */)a1;
- (id)findApplicationIn:(id)a0;

@end
