@class NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate;

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol, _ASExtensionHostContext>

@property (weak, nonatomic) id<_ASCredentialProviderExtensionHostContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

@end
