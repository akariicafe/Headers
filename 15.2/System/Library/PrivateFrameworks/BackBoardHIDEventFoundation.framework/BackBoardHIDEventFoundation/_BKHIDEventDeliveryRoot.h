@class NSString, NSArray, NSSet;

@interface _BKHIDEventDeliveryRoot : NSObject {
    NSString *_identifier;
    NSArray *_dispatchingRules;
    NSSet *_resolutions;
}

- (id)description;
- (void).cxx_destruct;

@end
