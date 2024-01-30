@class NSString;

@interface VOSUSBDevice : NSObject <VOSBluetoothConnectableDevice>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)paired;
- (BOOL)connected;
- (void)connect;
- (void)disconnect;
- (BOOL)connecting;
- (void).cxx_destruct;
- (void)unpair;

@end
