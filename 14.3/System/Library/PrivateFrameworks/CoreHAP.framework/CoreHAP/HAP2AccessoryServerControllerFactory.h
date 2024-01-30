@class NSString;

@interface HAP2AccessoryServerControllerFactory : HAP2LoggingObject <HAP2AccessoryServerControllerFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createControllerWithEncoding:(id)a0 secureTransport:(id)a1 operationQueue:(id)a2;

@end
