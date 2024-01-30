@class BMBiomeScheduler, BPSSink, ATXUserEducationSuggestionConnector, ATXUserEducationSuggestionExploreFaces, ATXNotificationManagementMAConstants, NSUserDefaults;

@interface ATXUserEducationSuggestionExploreFacesServer : ATXUserEducationSuggestionBaseServer {
    ATXUserEducationSuggestionConnector *_connector;
    ATXNotificationManagementMAConstants *_constants;
    ATXUserEducationSuggestionExploreFaces *_suggestion;
    NSUserDefaults *_defaults;
    BMBiomeScheduler *_backlightEventScheduler;
    BPSSink *_backlightEventSink;
}

- (long long)gracePeriod;
- (id)initWithConnector:(id)a0;
- (id)suggestion;
- (void).cxx_destruct;
- (long long)maxHour;
- (long long)minHour;
- (void)scheduleNextTry;
- (void)backlightEventHandler:(id)a0;
- (id)backlightEventSink;
- (void)cancelBacklightEventSubscription;
- (BOOL)isSubscribedForBacklightEvents;
- (long long)numBacklightOffEventsBeforeDismissSuggestion;
- (void)sendSuggestionWithEventType:(unsigned long long)a0;
- (void)setIsSubscribedForBacklightEvents:(BOOL)a0;
- (BOOL)shouldNeverShowSuggestionAgain;
- (void)startUpSubscriberToBacklightBiomeStreamForTheFirstTime;
- (void)startUpSubscriberToBacklightBiomeStreamIfSubscribed;
- (long long)tryAgainIntervalSeconds;
- (void)tryToSendSuggestion;

@end
