@class NSDate, NSString, AMSBagNetworkTaskResult, NSError, AMSObserver, AMSBagNetworkTask, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>

@property (retain, nonatomic) AMSObserver *accountsChangedObserver;
@property (retain, nonatomic) AMSBagNetworkTaskResult *cachedResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedDataAccessQueue;
@property (retain, nonatomic) NSString *cachedStorefront;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedStorefrontAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) AMSBagNetworkTask *currentLoadTask;
@property (retain, nonatomic) NSError *activeFailure;
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

+ (BOOL)_shouldProcessChangedAccount:(id)a0 forMediaType:(id)a1;
+ (id)valueForURLVariable:(id)a0 account:(id)a1 clientInfo:(id)a2;
+ (BOOL)_isDataDictionary:(id)a0 equalToDataDictionary:(id)a1;

- (id)bagKeyInfoForKey:(id)a0;
- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (id)_fetchBag;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidateCacheNotification:(id)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
- (void)_updateCachedResult:(id)a0;

@end
