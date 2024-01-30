@class NSString, CBCentralManager, CBPeripheral;

@interface SCROIODotPadElement : SCROIOElement <SCROIOBTLESerialElementProtocol> {
    CBCentralManager *_central;
    CBPeripheral *_peripheral;
    int _identifier;
}

@property (readonly, nonatomic) CBCentralManager *central;
@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) NSString *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)identifier;
- (int)transport;
- (void).cxx_destruct;
- (id)initWithCentral:(id)a0 peripheral:(id)a1;
- (id)dotFamilyIdentifier;

@end
