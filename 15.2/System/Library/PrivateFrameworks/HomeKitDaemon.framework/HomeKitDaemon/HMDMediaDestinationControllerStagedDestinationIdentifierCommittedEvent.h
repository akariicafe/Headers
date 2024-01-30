@class NSString, NSDictionary, NSUUID;

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSUUID *stagedDestinationIdentifier;


- (void).cxx_destruct;
- (id)initWithStagedDestinationIdentifier:(id)a0 isTriggeredOnControllerDevice:(id)a1 userPrivilege:(id)a2;

@end
