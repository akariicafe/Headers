@class AMSBagKeySet, NSString, ACAccount;
@protocol AMSBagProtocol;

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)_processURLResult:(id)a0;

- (id)initWithBagContract:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (id)_currentCachedFamilyInfo;
- (id)_performFamilyInfoRequestForAccount:(id)a0 error:(id *)a1;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)a0;
- (void)_cacheFamilyInfoLookupResult:(id)a0 forAccount:(id)a1;
- (id)performFamilyInfoLookup;

@end
