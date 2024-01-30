@class BSContinuousMachTimer, NSString, NSArray, NSSet;

@interface BKHIDEventDeliveryClient : BKHIDEventClient {
    NSString *_processDescription;
    NSArray *_deliveryRoots;
    NSArray *_keyCommandDeliveryRoots;
    NSArray *_deferringRules;
    NSSet *_keyCommandsRegistrations;
    NSSet *_resolutions;
    BSContinuousMachTimer *_bufferTimer;
}

- (void)invalidate;
- (void).cxx_destruct;

@end
