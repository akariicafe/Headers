@class NSString, HDProfile;

@interface HDHealthAppDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_activeUserSupportsSecureContainer;
- (long long)_approximateDaysSinceLastAppOpen;
- (id)_supportsSecureContainer;

@end
