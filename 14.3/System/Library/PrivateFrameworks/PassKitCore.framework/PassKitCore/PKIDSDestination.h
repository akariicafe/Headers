@class NSString;

@interface PKIDSDestination : NSObject

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *name;

+ (id)destinationWithDeviceIdentifier:(id)a0 name:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDeviceIdentifier:(id)a0 name:(id)a1;

@end
