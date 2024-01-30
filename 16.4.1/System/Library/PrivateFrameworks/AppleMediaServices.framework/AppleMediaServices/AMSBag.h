@class AMSProcessInfo, AMSBagCachedValueUpdateHandlers, NSString, AMSLRUCache, NSDate, NSObject, AMSBagUnderlyingDataPersistence;
@protocol OS_dispatch_queue, AMSBagDataSourceProtocol;

@interface AMSBag : NSObject <AMSBagProtocol>

@property (class, readonly, nonatomic) AMSLRUCache *bagCache;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (readonly, nonatomic) AMSBagUnderlyingDataPersistence *persistence;
@property BOOL persistenceAPIWasCalled;
@property (readonly, nonatomic) BOOL persistenceIsEnabled;
@property (retain, nonatomic) id<AMSBagDataSourceProtocol> dataSource;
@property (copy, nonatomic) AMSProcessInfo *processInfo;
@property (nonatomic) struct optional<AMSCore::Bag> { union { char __null_state_; struct Bag { void /* function */ **_vptr$ILoggable; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; } __val_; } ; BOOL __engaged_; } underlyingBag;
@property (readonly, nonatomic) AMSBagCachedValueUpdateHandlers *updateHandlers;
@property (readonly, nonatomic) NSString *descriptionExtended;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bagForProfile:(id)a0 profileVersion:(id)a1;
+ (id)_bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2 accountProvider:(id)a3;
+ (void)_resetBagCache;
+ (id)bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
+ (id)bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2 account:(id)a3;
+ (id)sharedPersistenceQueue;
+ (id)sharedPersistenceWithDefaultDirectory;
+ (unsigned long long)uninitializedToken;

- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id).cxx_construct;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (BOOL)isLoaded;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)_changedKeysComparingOriginalDictionary:(id)a0 toNewDictionary:(id)a1;
- (void)_configureDataSourceHandlers;
- (id)_initWithDataSource:(id)a0 persistence:(id)a1 persistenceQueue:(id)a2 updateHandlers:(id)a3 shouldConfigureDataSourceHandlers:(BOOL)a4;
- (void)_loadAndPersistBag;
- (void)_persistBagDictionary:(id)a0 withIdentifier:(id)a1 partialIdentifier:(id)a2 expirationDate:(id)a3 onlyIfPreExisting:(BOOL)a4;
- (id)_temporaryDictionary;
- (id)cachedValuesForKeys:(id)a0 observationToken:(unsigned long long *)a1 updateHandler:(id /* block */)a2;
- (id)initWithBag:(struct Bag { void /* function */ **x0; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *x0; struct __shared_weak_count *x1; } x1; })a0 processInfo:(id)a1;
- (id)initWithDataSource:(id)a0 persistenceDirectoryURL:(id)a1 persistenceQueue:(id)a2 changeHandlerQueue:(id)a3 shouldConfigureDataSourceHandlers:(BOOL)a4;
- (id)initWithDataSource:(id)a0 shouldConfigureDataSourceHandlers:(BOOL)a1;
- (void)removeObserverWithToken:(unsigned long long)a0;

@end
