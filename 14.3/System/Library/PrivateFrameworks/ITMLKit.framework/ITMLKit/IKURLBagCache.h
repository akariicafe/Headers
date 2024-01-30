@class NSString, NSDictionary, NSDate, AMSProcessInfo, SSURLBag;

@interface IKURLBagCache : NSObject <AMSBagProtocol>

@property (readonly, nonatomic) SSURLBag *urlBag;
@property (readonly, nonatomic) NSDictionary *existingDictionary;
@property (readonly, nonatomic) NSString *cachePath;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLBagContext;
+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)stringForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)_bagValueForKey:(id)a0 valueType:(unsigned long long)a1;
- (id)arrayForKey:(id)a0;
- (BOOL)isLoaded;
- (id)doubleForKey:(id)a0;
- (void)updateWithInvalidation:(BOOL)a0;
- (void)_loadWithNotification:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)checkTrustStatusForURL:(id)a0 completion:(id /* block */)a1;
- (id)_urlForKey:(id)a0;
- (BOOL)isTrustedURL:(id)a0;

@end
