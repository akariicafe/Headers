@class NSDictionary, NSString;

@interface AccessoryUSBCDCInterface : NSObject {
    NSString *_endpointUUID;
    NSString *_eaSessionUUID;
    unsigned int _cdcDataService;
    unsigned int _usbService;
    unsigned int _cdcConnect;
    struct IONotificationPort { } *_notiPort;
    struct SerialPortInterface { unsigned int x0; unsigned int x1; unsigned int x2[30]; unsigned int x3; unsigned int x4; unsigned int x5[30]; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10[118]; } *arena;
    char *rxBuf;
    char *txBuf;
    unsigned long long _deviceID;
    NSString *_protocolName;
}

@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly, nonatomic) unsigned int locationID;
@property (readonly, nonatomic) unsigned long long parentDeviceRegistryEntryID;
@property (readonly, nonatomic) NSDictionary *ioregProperties;
@property (copy, nonatomic) id /* block */ dataInHandler;

+ (unsigned long long)getRegistryEntryIDFromService:(unsigned int)a0;

- (int)writeData:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_handleReadDataCallback:(int)a0 revent:(unsigned long long)a1 t_look:(unsigned long long)a2;
- (void)_poll:(unsigned int)a0 txCommitted:(unsigned int)a1;
- (void)_processInterface:(unsigned int)a0;
- (void)closeCDCInterface;
- (id)initWithInterface:(unsigned int)a0 protocol:(id)a1 endpointUUID:(id)a2 andDataInHandler:(id /* block */)a3;
- (BOOL)openCDCInterface;
- (void)shuttingDownSession;

@end
