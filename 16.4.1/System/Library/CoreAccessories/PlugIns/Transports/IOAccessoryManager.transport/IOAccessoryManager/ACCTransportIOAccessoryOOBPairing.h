@class NSString, NSMutableData, NSNumber;
@protocol ACCTransportIOAccessoryOOBPairingProtocol;

@interface ACCTransportIOAccessoryOOBPairing : ACCTransportIOAccessoryBase {
    char *_oobPairingInfoReadBuffer;
    unsigned long long _oobPairingInfoReadBufferLength;
    char *_oobPairingDataReadBuffer;
    unsigned long long _oobPairingDataReadBufferLength;
}

@property (retain, nonatomic) NSString *deviceVendorName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceModelNumber;
@property (retain, nonatomic) NSString *deviceHardwareRevision;
@property (retain, nonatomic) NSString *deviceFirmwareRevision;
@property (retain, nonatomic) NSString *deviceSerialNumber;
@property (retain, nonatomic) NSString *deviceDockType;
@property (retain, nonatomic) NSString *deviceUID;
@property (retain, nonatomic) NSMutableData *deviceSupportedTypes;
@property (nonatomic) int activeType;
@property (retain, nonatomic) NSNumber *supports2way;
@property (weak, nonatomic) id<ACCTransportIOAccessoryOOBPairingProtocol> delegate;
@property (retain, nonatomic) NSString *endpointUUID;
@property (weak, nonatomic) NSString *parentConnectionUUID;

- (BOOL)supportsType:(int)a0;
- (BOOL)transmitData:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 andIOService:(unsigned int)a1;
- (id)description;
- (void).cxx_destruct;
- (void)_checkAccInfo;
- (int)_convertOOBPairingTypeFromIOAccessory:(int)a0;
- (BOOL)_handleIncomingOOBPairingInfoData:(int)a0;
- (void)_registerReadCallback;
- (void)closeServiceSession;
- (BOOL)openServiceSession;

@end
