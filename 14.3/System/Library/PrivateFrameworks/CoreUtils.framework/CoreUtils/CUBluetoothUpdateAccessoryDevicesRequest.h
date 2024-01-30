@class NSString, NSArray;

@interface CUBluetoothUpdateAccessoryDevicesRequest : NSObject

@property (copy, nonatomic) NSString *accessoryID;
@property (copy, nonatomic) NSArray *deviceAddresses;
@property (nonatomic) unsigned int deviceState;
@property (nonatomic) int highPriorityState;
@property (nonatomic) int hijackState;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)description;

@end
