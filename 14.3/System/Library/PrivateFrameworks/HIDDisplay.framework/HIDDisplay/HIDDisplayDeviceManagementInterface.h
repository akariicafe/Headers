@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;
- (BOOL)factoryReset:(unsigned char)a0 securityToken:(unsigned long long)a1 error:(id *)a2;
- (BOOL)getSecurityToken:(unsigned long long *)a0 error:(id *)a1;
- (id)getHIDDevices;
- (BOOL)setupInterface;

@end
