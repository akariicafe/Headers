@class NSString;

@interface HAP2AccessoryServerSecureTransportFactoryThread : NSObject <HAP2AccessoryServerSecureTransportFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSecureTransportWithTransport:(id)a0 isPaired:(BOOL)a1 encryptedSession:(id)a2;

@end
