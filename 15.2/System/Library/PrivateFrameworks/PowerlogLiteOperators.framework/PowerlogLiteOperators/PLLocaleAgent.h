@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void)logEventForwardTimeZone;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;

@end
