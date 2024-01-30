@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (void)load;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (void)logEventForwardTimeZone;
- (void)initOperatorDependancies;

@end
