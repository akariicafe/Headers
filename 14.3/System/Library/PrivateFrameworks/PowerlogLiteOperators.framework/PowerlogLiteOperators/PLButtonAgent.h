@class PLHIDEventOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLHIDEventOperatorComposition *menuButton;
@property (retain) PLHIDEventOperatorComposition *powerButton;

+ (void)load;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)logEventPointButtonWithEntry:(id)a0;
- (void)initOperatorDependancies;

@end
