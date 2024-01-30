@class NSUUID, NSString;

@interface HMDMediaDestinationControllerLogEvent : HMDLogEvent

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, copy) NSString *isTriggeredOnControllerDevice;
@property (readonly, copy) NSString *userPrivilege;

- (void).cxx_destruct;
- (id)initWithEventType:(id)a0 isTriggeredOnControllerDevice:(id)a1 userPrivilege:(id)a2;

@end
