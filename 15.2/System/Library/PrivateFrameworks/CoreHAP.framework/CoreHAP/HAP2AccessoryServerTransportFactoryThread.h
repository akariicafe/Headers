@class NSString;

@interface HAP2AccessoryServerTransportFactoryThread : NSObject <HAP2AccessoryServerTransportFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTransportWithAccessoryInfo:(id)a0 discovery:(id)a1;

@end
