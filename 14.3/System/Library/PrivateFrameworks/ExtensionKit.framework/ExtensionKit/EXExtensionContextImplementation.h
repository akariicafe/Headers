@class NSXPCListener, NSUUID, NSArray, NSXPCConnection, NSExtensionContext, NSObject, NSString;
@protocol OS_os_transaction, EXExtensionContextVending, EXExtensionContextHosting;

@interface EXExtensionContextImplementation : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextInternalImplementation>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *_UUID;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems;
@property (retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection;
@property (getter=_isDummyExtension, setter=_setDummyExtension:) BOOL _dummyExtension;
@property (readonly, weak) NSExtensionContext *extensionContext;
@property (retain, setter=_setExtensionHostProxy:) id<EXExtensionContextHosting> _extensionHostProxy;
@property (setter=_setExtensionHostAuditToken:) struct { unsigned int val[8]; } _extensionHostAuditToken;
@property (retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction;
@property (setter=_setPrincipalObject:) id _principalObject;
@property (retain, setter=_setProcessAssertion:) id _processAssertion;
@property (retain, setter=_setExtensionVendorProxy:) id<EXExtensionContextVending> _extensionVendorProxy;
@property (retain, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener;
@property (copy) NSUUID *_pkUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, setter=_setRequestCleanUpBlock:) id /* block */ _requestCleanUpBlock;

+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)a0;
+ (id)_defaultExtensionContextProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_derivedExtensionAuxiliaryHostProtocolWithContextClass:(Class)a0;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_extensionContextForIdentifier:(id)a0;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)a0;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_openURL:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_loadItemForPayload:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isHost;
- (void)___nsx_pingHost:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)cancelRequestWithError:(id)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)_loadPreviewImageForPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)_willPerformHostCallback:(id /* block */)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2 extensionContext:(id)a3;
- (void)_initializeAuxillaryConnectionWithListenerEndpoint:(id)a0;
- (void)_completeRequestReturningItemsSecondHalf:(id /* block */)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
