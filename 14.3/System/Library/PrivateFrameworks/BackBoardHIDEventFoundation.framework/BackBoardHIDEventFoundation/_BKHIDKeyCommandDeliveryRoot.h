@class NSString, BKSHIDEventKeyCommandsDispatchingRule;

@interface _BKHIDKeyCommandDeliveryRoot : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) BKSHIDEventKeyCommandsDispatchingRule *dispatchingRule;

- (void).cxx_destruct;

@end
