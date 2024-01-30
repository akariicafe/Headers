@class NSString;

@interface HMDMediaDestinationControllerDestinationLogEvent : HMDMediaDestinationControllerLogEvent

@property (readonly, copy) NSString *existingDestinationType;
@property (readonly, copy) NSString *destinationType;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithEventType:(id)a0 existingDestinationType:(id)a1 destinationType:(id)a2 isTriggeredOnControllerDevice:(id)a3 userPrivilege:(id)a4;

@end
