@class NSString;
@protocol ACCTransportIOAccessoryPortProtocol;

@interface ACCTransportIOAccessoryPort : ACCTransportIOAccessoryBase {
    struct __CFRunLoopSource { } *_notificationRunLoopSource;
}

@property (weak, nonatomic) id<ACCTransportIOAccessoryPortProtocol> delegate;
@property (nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) int portIDNumber;
@property (readonly, nonatomic) int portTransportType;
@property (readonly, nonatomic) int resistorID;
@property (readonly, nonatomic) int portStreamType;
@property (retain, nonatomic) NSString *ioAccPortEndpointUUID;
@property (weak, nonatomic) NSString *ioAccPortParentConnectionUUID;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)transmitData:(id)a0;
- (void)portServiceRegistrationComplete;
- (void)_handlePropertyChange;
- (void)_handleAccessoryPortDetach;
- (id)initWithDelegate:(id)a0 andIOService:(unsigned int)a1;
- (void)_handleIncomingData:(id)a0;
- (void)_handleResistorIDChange:(int)a0;
- (void)_registerForIOAccessoryPortInterestNotifications;

@end
