@class AMSURLRequestEncoder, NSString, NSArray, AMSBagKeySet, ACAccount, AMSPromise, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSCarrierOfferRegistrationTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) NSArray *carriers;
@property (readonly, nonatomic) AMSURLRequestEncoder *checkOfferRequestEncoder;
@property (readonly, nonatomic) NSString *deviceGUID;
@property (readonly, nonatomic) NSString *msisdn;
@property (readonly, nonatomic) AMSURLRequestEncoder *registrationRequestEncoder;
@property (readonly, nonatomic) AMSURLSession *urlSession;
@property (readonly, nonatomic) AMSPromise *pacTokenPromise;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)invalidParameterError:(id)a0;
+ (id)pollingIntervalFromBag:(id)a0;

- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 carriers:(id)a2 checkOfferRequestEncoder:(id)a3 deviceGUID:(id)a4 msisdn:(id)a5 pacTokenPromise:(id)a6 registrationRequestEncoder:(id)a7 urlSession:(id)a8;
- (id)_pacToken;
- (id)_hasOffers;
- (id)_checkOffersBody;
- (id)_performRegistrationFlow;
- (id)_includesAllowedCarrier;
- (id)_registerCarrierOffersToAccount;
- (id)_checkOffersRequest;
- (id)_parseCheckOffersResult:(id)a0;
- (id)_registrationRequest;
- (id)_registrationBody;
- (id)initWithAccount:(id)a0 bag:(id)a1 carriers:(id)a2 deviceGUID:(id)a3 msisdn:(id)a4;
- (void).cxx_destruct;
- (id)perform;

@end
