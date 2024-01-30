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

- (BOOL)paired;
- (BOOL)connected;
- (unsigned long long)connectedServices;
- (void)connect;
- (void)disconnect;
- (BOOL)connecting;
- (unsigned int)deviceClass;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (int)type;
- (unsigned int)productId;
- (id)identifier;
- (unsigned int)vendorId;
- (BOOL)isEqualToDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)address;
- (void)setPIN:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDevice:(struct BTDeviceImpl { } *)a0;
- (long long)compare:(id)a0;
- (struct BTDeviceImpl { } *)device;
- (void).cxx_destruct;
- (id)name;
- (void)unpair;
- (void)_clearName;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (id)initWithDevice:(struct BTDeviceImpl { } *)a0 address:(id)a1;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (unsigned int)authorizedServices;
- (BOOL)hasAddress:(id)a0;
- (BOOL)isAppleHIDDevice;
- (BOOL)isNameCached;

@end
