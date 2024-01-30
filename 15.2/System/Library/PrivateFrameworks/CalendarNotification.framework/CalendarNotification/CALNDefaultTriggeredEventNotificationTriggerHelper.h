@class NSString;
@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper>

@property (readonly, nonatomic) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)a0 hypothesis:(id)a1 sourceNotificationInfo:(id)a2 oldNotificationData:(id)a3 hasExistingTravelAdvice:(BOOL)a4 satisfiesMinimumTravelTimeThreshold:(BOOL)a5;
- (BOOL)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (void).cxx_destruct;
- (id)initWithTravelAdvisoryAuthority:(id)a0 dateProvider:(id)a1;
- (BOOL)_exceededMaximumTravelTimeThresholdForHypothesis:(id)a0;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)a0 oldNotificationData:(id)a1;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (BOOL)shouldTriggerForSourceClientIdentifier:(id)a0 trigger:(unsigned long long)a1 sourceNotificationInfo:(id)a2 oldNotificationData:(id)a3;
- (BOOL)_eventWillEndBeforeUserArrivesForHypothesis:(id)a0 eventEndDate:(id)a1;

@end
