@class NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointSensors;

@end
