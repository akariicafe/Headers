@class NSError, NSString, NSURL;

@interface ICMusicSubscriptionCarrierBundlingEligibilityResponse : NSObject

@property (readonly, nonatomic) long long carrierBundlingStatusType;
@property (readonly, nonatomic, getter=isFamilySubscription) BOOL familySubscription;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *SMSSessionIdentifier;
@property (readonly, nonatomic) double delayInterval;
@property (readonly, nonatomic) BOOL wantsDelayedRetry;
@property (readonly, nonatomic) NSString *headerEnrichmentMessage;
@property (readonly, nonatomic) NSString *headerEnrichmentSessionIdentifier;
@property (readonly, nonatomic) NSURL *headerEnrichmentURL;
@property (readonly, nonatomic) BOOL needsHeaderEnrichment;
@property (readonly, nonatomic) BOOL needsSilentSMS;
@property (readonly, nonatomic) NSString *silentSMSMessage;
@property (readonly, nonatomic) NSString *silentSMSNumber;
@property (readonly, nonatomic) NSString *cellularProviderName;
@property (readonly, nonatomic) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)initWithEligibilityDictionary:(id)a0 cellularProviderName:(id)a1 phoneNumber:(id)a2;

@end
