@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

- (id)initWithService:(unsigned int)a0;
- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (BOOL)setupInterface;
- (BOOL)factoryReset:(unsigned char)a0 securityToken:(unsigned long long)a1 error:(id *)a2;
- (BOOL)getSecurityToken:(unsigned long long *)a0 error:(id *)a1;
- (id)getHIDDevices;

@end
