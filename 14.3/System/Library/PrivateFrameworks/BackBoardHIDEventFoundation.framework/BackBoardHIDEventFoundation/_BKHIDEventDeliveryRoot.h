@class NSString, NSArray, NSSet;

@interface _BKHIDEventDeliveryRoot : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *dispatchingRules;
@property (retain, nonatomic) NSSet *resolutions;

- (void).cxx_destruct;
- (id)description;

@end
