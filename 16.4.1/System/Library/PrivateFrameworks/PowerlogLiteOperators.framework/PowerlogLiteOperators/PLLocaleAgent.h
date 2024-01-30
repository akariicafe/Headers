@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (id)entryEventForwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logTimeZoneEntry:(id)a0;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (id)init;
- (void)logEventForwardTimeZone;
- (void).cxx_destruct;

@end
