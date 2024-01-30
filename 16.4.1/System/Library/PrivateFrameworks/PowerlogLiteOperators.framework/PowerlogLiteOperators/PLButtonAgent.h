@class PLHIDEventOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLHIDEventOperatorComposition *buttonEvent;
@property (retain) PLHIDEventOperatorComposition *smartCoverEvent;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;

- (void)initOperatorDependancies;
- (void)logEventPointButton:(struct __IOHIDEvent { } *)a0;
- (void)log;
- (void)logEventForwardSmartCover:(struct __IOHIDEvent { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
