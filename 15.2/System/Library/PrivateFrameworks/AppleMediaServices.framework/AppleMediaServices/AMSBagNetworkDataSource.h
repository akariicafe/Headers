@class NSDate, NSString, AMSBagNetworkTaskResult, NSError, AMSObserver, AMSBagNetworkTask, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>

@property (retain, nonatomic) AMSObserver *accountsChangedObserver;
@property (retain, nonatomic) AMSBagNetworkTaskResult *cachedResult;
@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } cachedDataAccessLock;
@property (retain, nonatomic) NSString *cachedStorefront;
@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } cachedStorefrontAccessLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) AMSBagNetworkTask *currentLoadTask;
@property (retain, nonatomic) NSError *activeFailure;
@property (readonly, nonatomic) NSDate *activeFailureExpiration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
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
+ (BOOL)_shouldProcessChangedAccount:(id)a0 forMediaType:(id)a1;
+ (BOOL)_isDataDictionary:(id)a0 equalToDataDictionary:(id)a1;

- (void)_updateCachedResult:(id)a0;
- (id)_fetchBag;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)_accountStoreDidChange;
- (void).cxx_destruct;
- (void)_invalidateCacheNotification:(id)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
- (void)dealloc;
- (id)bagKeyInfoForKey:(id)a0;

@end
