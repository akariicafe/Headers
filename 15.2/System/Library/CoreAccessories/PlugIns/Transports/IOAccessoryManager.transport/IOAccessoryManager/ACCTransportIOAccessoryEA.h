@class NSString;
@protocol ACCTransportIOAccessoryEAProtocol;

@interface ACCTransportIOAccessoryEA : ACCTransportIOAccessoryBase {
    char *_eaDataReadBuffer;
    unsigned long long _eaDataReadBufferDataLength;
}

@property (retain, nonatomic) NSString *eaProtocol;
@property (retain, nonatomic) NSString *deviceVendorName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceModelNumber;
@property (retain, nonatomic) NSString *deviceHardwareRevision;
@property (retain, nonatomic) NSString *deviceFirmwareRevision;
@property (retain, nonatomic) NSString *deviceSerialNumber;
@property (retain, nonatomic) NSString *deviceDockType;
@property (weak, nonatomic) id<ACCTransportIOAccessoryEAProtocol> delegate;
@property (retain, nonatomic) NSString *endpointUUID;
@property (weak, nonatomic) NSString *parentConnectionUUID;
@property (readonly, nonatomic) BOOL sessionOpen;

- (id)initWithDelegate:(id)a0 andIOService:(unsigned int)a1;
- (id)description;
- (BOOL)transmitData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)openEAServiceSession;
- (void)closeEAServiceSession;
- (void)_checkEAInfo;
- (void)_registerEAReadCallback;
- (BOOL)_handleIncomingEAData;

@end
