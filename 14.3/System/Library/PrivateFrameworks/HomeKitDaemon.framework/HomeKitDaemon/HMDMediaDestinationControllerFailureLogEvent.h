@class NSString;

@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMDCoreAnalyticsLogging>

@property (readonly, copy) NSString *destinationControllerErrorCode;
@property (readonly, copy) NSString *errorCode;
@property (readonly, copy) NSString *errorDomain;

+ (id)identifier;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithDestinationControllerErrorCode:(id)a0 errorCode:(id)a1 errorDomain:(id)a2 isTriggeredOnControllerDevice:(id)a3 userPrivilege:(id)a4;

@end
