@class NSError, NSString, AMSBagNetworkTaskResult, NSDate, AMSObserver, NSMutableDictionary, AMSBagNetworkTask, AMSTimeout, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagAccountProvider;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>

@property (retain, nonatomic) AMSObserver *accountsChangedObserver;
@property (readonly, nonatomic) id<AMSBagAccountProvider> accountProvider;
@property (retain, nonatomic) AMSBagNetworkTaskResult *cachedResult;
@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } cachedDataAccessLock;
@property (retain, nonatomic) NSString *cachedStorefront;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) AMSBagNetworkTask *currentLoadTask;
@property (retain, nonatomic) NSMutableDictionary *defaultValues;
@property (retain, nonatomic) NSError *activeFailure;
@property (readonly, nonatomic) AMSTimeout *activeFailureTimeout;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (copy, nonatomic) id /* block */ dataSourceChangedHandler;
@property (copy, nonatomic) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueForURLVariable:(id)a0 account:(id)a1 clientInfo:(id)a2;

- (id)defaultValueForKey:(id)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (void)_updateCachedResult:(id)a0;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
- (id)_newCompletionQueue;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)_invalidateCacheNotification:(id)a0;
- (void)loadWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2 accountProvider:(id)a3;
- (void)_accountStoreDidChange;
- (id)_fetchBag;
- (void).cxx_destruct;

@end
