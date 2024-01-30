@class NSString, NSDictionary;

@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *destinationControllerErrorCode;
@property (readonly, copy) NSString *errorCode;
@property (readonly, copy) NSString *errorDomain;


- (void).cxx_destruct;
- (id)initWithDestinationControllerErrorCode:(id)a0 errorCode:(id)a1 errorDomain:(id)a2 isTriggeredOnControllerDevice:(id)a3 userPrivilege:(id)a4;

@end
