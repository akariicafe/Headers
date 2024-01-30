@class PLHIDEventOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLHIDEventOperatorComposition *buttonEvent;
@property (retain) PLHIDEventOperatorComposition *smartCoverEvent;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)logEventForwardSmartCover:(struct __IOHIDEvent { } *)a0;
- (void)logEventPointButton:(struct __IOHIDEvent { } *)a0;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;

@end
