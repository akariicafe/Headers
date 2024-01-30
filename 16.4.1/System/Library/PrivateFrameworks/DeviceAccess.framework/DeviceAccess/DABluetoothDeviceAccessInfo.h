@class NSArray, NSUUID;

@interface DABluetoothDeviceAccessInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSArray *bluetoothServices;
@property (copy, nonatomic) NSUUID *identifier;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;

@end
