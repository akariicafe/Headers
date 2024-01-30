@class NSString;
@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTransitionProvider : NSObject <CALNTriggeredEventNotificationTransitionProvider>

@property (readonly, nonatomic) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTravelAdvisoryAuthority:(id)a0 dateProvider:(id)a1;
- (unsigned long long)_transitionForAlarmFiredForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (unsigned long long)_transitionForTravelAdviceReceivedForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (BOOL)_timeToLeaveStateAlreadyDisplayedBasedOnSourceNotificationInfo:(id)a0 oldNotificationData:(id)a1;
- (BOOL)_shouldRemoveNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (BOOL)_shouldAddNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (unsigned long long)_transitionForTimeToLeaveRefreshTimerFiredForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (BOOL)_shouldModifyForAlarmFiredForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (unsigned long long)transitionForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2 trigger:(unsigned long long)a3;

@end
