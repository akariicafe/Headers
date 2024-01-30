@class NSString;

@interface HAP2AccessoryServerEncodingFactoryThread : NSObject <HAP2AccessoryServerEncodingFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createEncodingWithOperationQueue:(id)a0 accessoryServerMetadata:(id)a1 encodingFeatures:(unsigned long long)a2;

@end
