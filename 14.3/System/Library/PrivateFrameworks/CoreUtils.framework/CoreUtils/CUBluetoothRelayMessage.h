@class NSString, NSData;

@interface CUBluetoothRelayMessage : NSObject

@property (copy, nonatomic) NSString *sourceAddress;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *conduitDeviceID;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) NSData *messageData;
@property (nonatomic) int messageType;

- (void).cxx_destruct;
- (id)description;

@end
