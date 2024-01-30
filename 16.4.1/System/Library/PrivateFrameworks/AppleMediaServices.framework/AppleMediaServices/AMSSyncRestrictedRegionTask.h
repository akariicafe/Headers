@class NSString, AMSBagKeySet, ACAccount;
@protocol AMSBagProtocol;

@interface AMSSyncRestrictedRegionTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (double)checkRestrictedRegionDurationValueFromBag:(id)a0;
+ (id)createSyncAccountFlagsTaskForAccount:(id)a0 bag:(id)a1;
+ (BOOL)didExceededSyncDuration:(double)a0 lastTimestamp:(double)a1 currentTimestamp:(double)a2;
+ (double)durationOfSyncRestrictedRegionValueFromBag:(id)a0;
+ (BOOL)hasCachedRestrictedRegionsValueFromAccount:(id)a0 cachedTimestamp:(double *)a1;
+ (BOOL)storefrontContainsRestrictedRegionsValueFromBag:(id)a0;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)cacheRestrictedRegionSyncTimestamp:(double)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)performSync;

@end
