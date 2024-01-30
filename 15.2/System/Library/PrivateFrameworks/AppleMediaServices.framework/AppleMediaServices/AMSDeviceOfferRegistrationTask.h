@class NSString, NSArray, AMSDeviceOfferEligibilityTask, AMSDeviceOfferRegistrationPrivacyValidator, NSSet, AMSBagKeySet, ACAccount, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSDeviceOffersTracking;

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) AMSDeviceOfferEligibilityTask *eligibilityTask;
@property (readonly, nonatomic) NSString *deviceGUID;
@property (readonly, nonatomic) NSString *masterSerialNumber;
@property (readonly, nonatomic) id<AMSDeviceOffersTracking> deviceOffersStore;
@property (readonly, nonatomic) AMSDeviceOfferRegistrationPrivacyValidator *privacyValidator;
@property (retain, nonatomic) AMSURLSession *urlSession;
@property (nonatomic) BOOL ignoreRegistrationBlacklist;
@property (nonatomic) BOOL lightweightCheckOnly;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSSet *offerIdentifiers;
@property (retain, nonatomic) NSArray *registrationGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;

- (id)initWithAccount:(id)a0 bag:(id)a1 deviceGUID:(id)a2 deviceOffersStore:(id)a3 eligibilityTask:(id)a4 masterSerialNumber:(id)a5 privacyValidator:(id)a6 urlSession:(id)a7;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)_offersDecodedFromResult:(id)a0;
- (BOOL)_isRegistrationAllowed;
- (BOOL)_isDeviceGroupRegistrationAllowed;
- (id)_performLightweightRequestWithAccount:(id)a0;
- (id)_performRegistrationRequestWithAccount:(id)a0;
- (id)_lightweightDeviceOffersURL;
- (id)_registrationRequestEncoderWithAccount:(id)a0;
- (id)_urlRequestWithBagURL:(id)a0;
- (id)_latestDeviceGroups;
- (id)_sanitizedResultPromise:(id)a0;
- (id)_handleRegistrationResult:(id)a0;
- (id)_filteredRegistrationGroups:(id)a0;
- (id)_serialNumberBlacklist;
- (id)_eligibilityQualifiedRegistrationGroupsWithAccount:(id)a0 pendingRegistrationGroups:(id)a1;
- (id)_companionSerialNumbers;
- (id)_deviceOffersURL;
- (id)_registrationEndpointPOSTParametersWithRegistrationGroups:(id)a0 companionSerialNumbers:(id)a1;
- (id)_registrationEndpointPOSTDeviceGroupsBody:(id)a0;
- (id)_registrationEndpointPOSTCompanionBodyWithDeviceGroups:(id)a0 companionSerialNumbers:(id)a1;
- (BOOL)_isEligibilityCallsAllowed;
- (id)_accountEligibleSerialsFromDeviceOffers:(id)a0 accountOffers:(id)a1;
- (id)_registrationGroupsFrom:(id)a0 matching:(id)a1;
- (void)_updateWithDeviceOffers:(id)a0;
- (id)_bucketedOffers:(id)a0;
- (id)_latestOffersWithFetchedDeviceOffers:(id)a0 offersStore:(id)a1;
- (id)perform;

@end
