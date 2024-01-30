@class NSString;
@protocol WFCatalystContentHost;

@interface WFCatalystContentHostContext : NSExtensionContext <WFCatalystContentHost>

@property (weak, nonatomic) id<WFCatalystContentHost> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)actionInterfaceListenerDidBecomeActive:(id)a0;

@end
