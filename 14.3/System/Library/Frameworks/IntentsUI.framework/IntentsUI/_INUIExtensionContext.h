@class NSString, _INUIExtensionContextState;

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {
    _INUIExtensionContextState *_currentExtensionContextState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)setExtensionContextState:(id)a0 completion:(id /* block */)a1;
- (id)_errorHandlingHostProxy;
- (struct CGSize { double x0; double x1; })hostedViewMinimumAllowedSize;
- (struct CGSize { double x0; double x1; })hostedViewMaximumAllowedSize;
- (struct CGSize { double x0; double x1; })_bestAllowedSizeForAllowedSizesDictionary:(id)a0;
- (id)interfaceParametersDescription;
- (void)_requestHandlingOfIntent:(id)a0;
- (void)_willBeginEditing;

@end
