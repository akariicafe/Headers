@class NSString, NSArray, NSSet;

@interface BKHIDEventDeliveryClient : BKHIDEventClient {
    NSString *_bundleIdentifier;
    NSArray *_deliveryRoots;
    NSArray *_keyCommandDeliveryRoots;
    NSArray *_deferringRules;
    NSSet *_keyCommandsRegistrations;
    NSSet *_resolutions;
}

- (void).cxx_destruct;

@end
