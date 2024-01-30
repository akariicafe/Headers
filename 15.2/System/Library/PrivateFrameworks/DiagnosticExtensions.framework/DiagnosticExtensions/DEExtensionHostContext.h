@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)attachmentsForParameters:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)hasEntitlement;
- (void)setupForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)teardownForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;
- (void)attachmentListWithHandler:(id /* block */)a0;

@end
