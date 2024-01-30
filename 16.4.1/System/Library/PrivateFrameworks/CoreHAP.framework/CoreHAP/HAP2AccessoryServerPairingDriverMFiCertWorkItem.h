@class NSError;

@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (retain, nonatomic) NSError *cancelError;

+ (id)checkCertificate;

- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)runForPairingDriver:(id)a0;

@end
