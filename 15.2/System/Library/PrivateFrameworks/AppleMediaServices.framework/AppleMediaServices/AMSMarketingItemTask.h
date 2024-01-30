@class NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMarketingItemTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *clientVersion;
@property (nonatomic) BOOL hydrateRelatedContent;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *offerHints;
@property (readonly, nonatomic) NSString *placement;
@property (readonly, nonatomic) NSString *serviceType;
@property (nonatomic) BOOL includeMediaAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;

- (void).cxx_destruct;
- (id)perform;
- (id)_fetchItems;
- (id)_fetchItemsFromURL:(id)a0;
- (id)initWithBag:(id)a0 clientIdentifier:(id)a1 clientVersion:(id)a2 placement:(id)a3 serviceType:(id)a4;
- (id)_processMediaResultFromPromise:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientIdentifier:(id)a2 clientVersion:(id)a3 placement:(id)a4 serviceType:(id)a5;
- (id)performWithFetchOnly;

@end
