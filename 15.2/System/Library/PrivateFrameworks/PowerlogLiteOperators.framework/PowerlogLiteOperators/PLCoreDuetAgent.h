@class PLNSNotificationOperatorComposition, _CDInBedDetector;

@interface PLCoreDuetAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) _CDInBedDetector *inBedDetector;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionInBedDetection;
+ (void)load;

- (void)registerForDailyNotification;
- (void)logEventIntervalInBedDetection:(id)a0;
- (void)log;
- (void)handleInBedDetection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerForTaskingNotification:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;

@end
