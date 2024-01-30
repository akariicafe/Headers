@class NSString;

@interface HMDMediaDestinationControllerLogEvent : HMMLogEvent

@property (readonly, copy) NSString *isTriggeredOnControllerDevice;
@property (readonly, copy) NSString *userPrivilege;

- (void).cxx_destruct;
- (id)initWithIsTriggeredOnControllerDevice:(id)a0 userPrivilege:(id)a1;

@end
