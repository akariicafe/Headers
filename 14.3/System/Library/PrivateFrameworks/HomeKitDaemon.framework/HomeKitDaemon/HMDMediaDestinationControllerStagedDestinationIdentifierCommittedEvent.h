@class NSUUID;

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMDCoreAnalyticsLogging>

@property (readonly, copy) NSUUID *stagedDestinationIdentifier;

+ (id)identifier;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithStagedDestinationIdentifier:(id)a0 isTriggeredOnControllerDevice:(id)a1 userPrivilege:(id)a2;

@end
