@class NSString, CBCentralManager, CBPeripheral;

@interface SCROIODotPadElement : SCROIOElement <SCROIOBTLESerialElementProtocol> {
    CBCentralManager *_central;
    CBPeripheral *_peripheral;
    int _identifier;
}

@property (readonly, nonatomic) CBCentralManager *central;
@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)transport;
- (int)identifier;
- (void).cxx_destruct;
- (id)dotFamilyIdentifier;
- (id)initWithCentral:(id)a0 peripheral:(id)a1;

@end
