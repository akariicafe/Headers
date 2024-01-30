@interface HMDMediaDestinationControllerTransactionUpdatedDestinationLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMDCoreAnalyticsLogging>

+ (id)identifier;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithExistingDestinationType:(id)a0 destinationType:(id)a1 isTriggeredOnControllerDevice:(id)a2 userPrivilege:(id)a3;

@end
