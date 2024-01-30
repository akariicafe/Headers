@class NSURL;

@interface AuthenticationServicesCore.ASCABLEClient : NSObject <CBCentralManagerDelegate> {
    void /* unknown type, empty encoding */ qrCodeStruct;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ bluetoothManager;
    void /* unknown type, empty encoding */ cryptographyManager;
    void /* unknown type, empty encoding */ currentRelyingPartyIdentifier;
    void /* unknown type, empty encoding */ currentOperationType;
    void /* unknown type, empty encoding */ clientDataJSON;
    void /* unknown type, empty encoding */ webSocket;
    void /* unknown type, empty encoding */ authenticatorAdvertisement;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ powerLogger;
    void /* unknown type, empty encoding */ testDelegate;
    void /* unknown type, empty encoding */ currentState;
}

@property (nonatomic, readonly) NSURL *qrCodeURL;

- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)cancelIfNecessary;
- (id)initWithDelegate:(id)a0 isRegistrationRequest:(BOOL)a1;
- (void)performAuthenticationOperation:(long long)a0 forRelyingPartyIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
