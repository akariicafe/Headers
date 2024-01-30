@class NSString, NSArray, NSSet;

@interface _BKHIDEventDeliveryRoot : NSObject {
    NSString *_identifier;
    NSArray *_dispatchingRules;
    NSSet *_resolutions;
    NSArray *_bufferingDispatchRules;
}

- (id)description;
- (void).cxx_destruct;

@end
