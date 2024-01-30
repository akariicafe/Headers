@class NSMutableArray, NSArray, HKHealthStore, HKSynchronousObserverSet, NSObject, HKSourceListDataModel;
@protocol OS_dispatch_queue;

@interface HKSourceListDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_mainQueue;
    NSObject<OS_dispatch_queue> *_resultsQueue;
    NSMutableArray *_transformers;
    NSMutableArray *_followupTransformers;
    NSArray *_rawSources;
    HKSynchronousObserverSet *_observers;
    int _notifyToken;
    BOOL _hasInitiatedFetch;
    _Atomic BOOL _invalidated;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKSourceListDataModel *sources;
@property (nonatomic) BOOL shouldFetchAppInstallationStatus;
@property (nonatomic) BOOL shouldFetchAppIcons;
@property (nonatomic) BOOL shouldFetchPurposeStrings;
@property (nonatomic) BOOL shouldIncludeSpecialSources;
@property (nonatomic) BOOL deliverUpdates;

+ (void)fetchIconForSource:(id)a0 completion:(id /* block */)a1;
+ (id /* block */)_builtinIconFetchTransformer;
+ (void)_performTransformations:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)_remoteWatchAppPurposeStringsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id /* block */)_builtinInstallationStatusTransformer;
+ (id /* block */)_builtinPurposeStringsFetchTransformer;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithHealthStore:(id)a0 sources:(id)a1 queue:(id)a2;
- (void)fetchSources;
- (id)initWithHealthStore:(id)a0;
- (void)invalidate;
- (id)initWithHealthStore:(id)a0 queue:(id)a1;
- (void)_prependBuiltinTransformers;
- (void)_didFetchSources:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)_specialAppBundleIdentifiers;
- (void)_fakeSourceForInstalledAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_notifyObserversForDataSourceUpdate;
- (void)_throttledNotificationOfDataSourceUpdate;
- (void)fetchModelForSources:(id)a0 completion:(id /* block */)a1;
- (void)addFetchTransformer:(id /* block */)a0;

@end
