@class NSString, NSSet, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (nonatomic) BOOL lightweightCheckOnly;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSSet *offerIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;

- (id)perform;
- (void).cxx_destruct;
- (id)_deviceOffersURL;
- (id)_urlRequestWithBagURL:(id)a0;
- (id)_requestParameters;
- (void)_updateWithDeviceOffers:(id)a0;
- (id)_bucketedOffers:(id)a0;
- (id)_urlRequestMethod;
- (id)_latestOffersWithFetchedDeviceOffers:(id)a0 offersStore:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1;

@end
