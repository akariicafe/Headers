@class NSString;

@interface DEExtensionContext : NSExtensionContext <DEExtensionVendorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)teardownWithParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)attachmentsForParameters:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)hasEntitlement;
- (void)setupWithParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;
- (void)attachmentListWithHandler:(id /* block */)a0;

@end
