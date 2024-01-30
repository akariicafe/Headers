@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

- (id)initWithService:(unsigned int)a0;
- (id)initWithContainerID:(id)a0;
- (BOOL)setupInterface;
- (void).cxx_destruct;
- (BOOL)factoryReset:(unsigned char)a0 securityToken:(unsigned long long)a1 error:(id *)a2;
- (id)getHIDDevices;
- (BOOL)getSecurityToken:(unsigned long long *)a0 error:(id *)a1;

@end
