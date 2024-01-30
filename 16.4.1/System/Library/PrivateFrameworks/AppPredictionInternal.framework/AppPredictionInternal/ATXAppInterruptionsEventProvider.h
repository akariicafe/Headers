@class ATXModeEvent, ATXInterruptedAppSessionAccumulator;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXAppInterruptionsEventProvider : NSObject {
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    ATXInterruptedAppSessionAccumulator *_globalInterruptedAppSessionsAccumulator;
    ATXInterruptedAppSessionAccumulator *_modeInterruptedAppSessionsAccumulator;
}

@property (readonly, nonatomic) ATXModeEvent *mostRecentModeEvent;

- (void).cxx_destruct;
- (id)dateIntervalFromAppLaunchEvent:(id)a0;
- (BOOL)appLaunchEventOccurredWhileInMode:(id)a0 modeTransitionEvent:(id)a1;
- (id)dateIntervalFromNotificationEvent:(id)a0;
- (unsigned long long)globalAppInterruptionsCountByEntity:(id)a0;
- (double)globalPopularityOfInterruptingEntity:(id)a0;
- (id)initWithModeEventProvider:(id)a0;
- (double)modeAppInterruptionsClassConditionalProbabilityByEntity:(id)a0;
- (unsigned long long)modeAppInterruptionsCountByEntity:(id)a0;
- (double)modePopularityOfInterruptingEntity:(id)a0;
- (BOOL)notificationEventOccurredWhileInMode:(id)a0 modeTransitionEvent:(id)a1;
- (double)ratioOfModePopularityToGlobalPopularityOfInterruptingEntity:(id)a0;
- (BOOL)successfullyCalculatedAppSessionInterruptions;
- (void)trackAppSessionInterruption:(id)a0;
- (void)trackNewModeEvent:(id)a0;

@end
