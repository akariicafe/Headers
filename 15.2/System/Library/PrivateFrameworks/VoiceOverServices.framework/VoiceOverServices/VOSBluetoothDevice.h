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
- (long long)compare:(id)a0;
- (id)identifier;
- (id)address;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (void)unpair;
- (void)setPIN:(id)a0;
- (unsigned int)deviceClass;
- (void)disconnect;
- (void)setDevice:(struct BTDeviceImpl { } *)a0;
- (unsigned int)productId;
- (BOOL)connected;
- (unsigned int)vendorId;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct BTDeviceImpl { } *)device;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)name;
- (BOOL)connecting;
- (int)type;
- (BOOL)paired;
- (unsigned long long)connectedServices;
- (unsigned int)authorizedServices;
- (unsigned int)majorClass;
- (void)acceptSSP:(int)a0;
- (id)initWithDevice:(struct BTDeviceImpl { } *)a0 address:(id)a1;
- (void)_clearName;
- (unsigned int)minorClass;
- (unsigned long long)connectedServicesCount;
- (void)connectWithServices:(unsigned int)a0;
- (BOOL)isNameCached;
- (BOOL)hasAddress:(id)a0;
- (BOOL)isAppleHIDDevice;

@end
