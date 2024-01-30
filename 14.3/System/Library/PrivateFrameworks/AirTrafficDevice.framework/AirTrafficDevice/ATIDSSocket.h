@class ATIDSService, IDSDevice, IDSDeviceConnection;

@interface ATIDSSocket : ATSocket {
    IDSDeviceConnection *_deviceConnection;
    unsigned int _wifiWriteBufferSize;
    unsigned int _btWriteBufferSize;
}

@property (readonly, nonatomic) IDSDevice *device;
@property (readonly, nonatomic) ATIDSService *service;
@property (readonly, nonatomic) long long priority;

- (void).cxx_destruct;
- (void)dealloc;
- (void)connectWithCompletion:(id /* block */)a0;
- (BOOL)open;
- (id)initWithDevice:(id)a0 service:(id)a1 priority:(long long)a2;
- (void)addTransportUpgradeException;
- (void)removeTransportUpgradeException;
- (void)closeDescriptor;

@end
