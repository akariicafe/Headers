@class NSString;

@interface HKOnboardingUIErrorAnalyticsEvent : NSObject <HKAnalyticsEvent>

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *featureVersion;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *step;
@property (readonly, copy, nonatomic) NSString *errorCategory;
@property (readonly, copy, nonatomic) NSString *errorDetail;
@property (readonly, copy, nonatomic) NSString *OTAFactorPackID;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithFeatureIdentifier:(id)a0 featureVersion:(id)a1 countryCode:(id)a2 step:(id)a3 errorCategory:(id)a4 errorDetail:(id)a5 OTAFactorPackID:(id)a6;
- (id)initWithFeatureIdentifier:(id)a0 featureVersion:(id)a1 countryCode:(id)a2 step:(id)a3 onboardingEligibility:(id)a4;
- (id)initWithFeatureIdentifier:(id)a0 featureVersion:(id)a1 countryCode:(id)a2 step:(id)a3 onboardingIneligibilityReasons:(unsigned long long)a4;

@end
