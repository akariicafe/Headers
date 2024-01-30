@interface CALNTriggeredEventNotificationFeedbackHelper : NSObject

+ (void)recordDisplayOfInitialTimeToLeaveAlertForSourceClientIdentifier:(id)a0 event:(id)a1 hypothesis:(id)a2 travelAdvisoryTimelinessPeriod:(unsigned long long)a3 foundInAppsEventTracker:(id)a4 suggestionsServiceLogger:(id)a5 ttlEventTracker:(id)a6;
+ (void)sendFeedbackForPostingNotificationWithTravelAdvisoryTimelinessPeriod:(unsigned long long)a0 sourceClientIdentifier:(id)a1 travelEngine:(id)a2;

@end
