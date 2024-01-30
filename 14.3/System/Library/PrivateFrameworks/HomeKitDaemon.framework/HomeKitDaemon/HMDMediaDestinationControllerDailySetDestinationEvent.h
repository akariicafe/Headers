@class NSUUID, NSString;

@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, copy) NSString *existingDestinationType;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithExistingDestinationType:(id)a0;

@end
