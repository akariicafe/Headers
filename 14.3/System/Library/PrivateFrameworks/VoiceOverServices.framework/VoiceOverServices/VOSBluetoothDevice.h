@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice> {
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl { } *_device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)paired;
- (void)setDevice:(struct BTDeviceImpl { } *)a0;
- (unsigned int)deviceClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unpair;
- (id)address;
- (unsigned long long)connectedServices;
- (long long)compare:(id)a0;
- (int)type;
- (struct BTDeviceImpl { } *)device;
- (unsigned int)productId;
- (BOOL)isEqual:(id)a0;
- (unsigned int)vendorId;
- (id)name;
- (BOOL)isEqualToDevice:(id)a0;
- (void)setPIN:(id)a0;
- (id)identifier;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (unsigned int)authorizedServices;
- (unsigned int)majorClass;
- (void)acceptSSP:(int)a0;
- (id)initWithDevice:(struct BTDeviceImpl { } *)a0 address:(id)a1;
- (void)_clearName;
- (unsigned int)minorClass;
- (unsigned long long)connectedServicesCount;
- (void)connectWithServices:(unsigned int)a0;
- (BOOL)connecting;
- (BOOL)isNameCached;
- (BOOL)hasAddress:(id)a0;
- (BOOL)isAppleHIDDevice;

@end
