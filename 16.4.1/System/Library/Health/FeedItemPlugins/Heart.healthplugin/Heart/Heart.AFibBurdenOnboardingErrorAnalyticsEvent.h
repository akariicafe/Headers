@class NSString;

@interface Heart.AFibBurdenOnboardingErrorAnalyticsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ cannotProgressReason;
    void /* unknown type, empty encoding */ onboardingStep;
    void /* unknown type, empty encoding */ countryCode;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
