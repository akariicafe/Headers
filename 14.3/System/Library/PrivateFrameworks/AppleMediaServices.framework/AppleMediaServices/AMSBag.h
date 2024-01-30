@class NSString, AMSLRUCache, NSDate, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagDataSourceProtocol;

@interface AMSBag : NSObject <AMSBagProtocol>

@property (class, readonly, nonatomic) AMSLRUCache *bagCache;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *bagCacheAccessQueue;

@property (retain, nonatomic) id<AMSBagDataSourceProtocol> dataSource;
@property (readonly, nonatomic) NSString *descriptionExtended;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bagForProfile:(id)a0 profileVersion:(id)a1;
+ (id)bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
+ (void)_resetBagCache;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)URLForKey:(id)a0 account:(id)a1;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)stringForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (BOOL)isLoaded;
- (id)doubleForKey:(id)a0;

@end
