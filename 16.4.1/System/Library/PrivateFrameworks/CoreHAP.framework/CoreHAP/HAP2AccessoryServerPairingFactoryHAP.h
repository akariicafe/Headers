@class NSString;

@interface HAP2AccessoryServerPairingFactoryHAP : NSObject <HAP2AccessoryServerPairingFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPairingDriverWithAccessoryInfo:(id)a0 transport:(id)a1 secureTransportFactory:(id)a2 encoding:(id)a3 operationQueue:(id)a4;

@end
