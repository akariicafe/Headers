@class NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointSensors;

@end
