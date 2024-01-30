@class NSString, NSArray, NSSet;

@interface BKHIDEventDeliveryClient : BKHIDEventClient

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *deliveryRoots;
@property (retain, nonatomic) NSArray *keyCommandDeliveryRoots;
@property (retain, nonatomic) NSArray *deferringRules;
@property (retain, nonatomic) NSSet *keyCommandsRegistrations;
@property (retain, nonatomic) NSSet *resolutions;

- (void).cxx_destruct;

@end
