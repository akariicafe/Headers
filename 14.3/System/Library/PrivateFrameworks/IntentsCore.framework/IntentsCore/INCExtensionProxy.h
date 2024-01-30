@class NSValue, INCExtensionConnection, NSExtension;
@protocol _INExtensionContextVending;

@interface INCExtensionProxy : NSObject <INCExtensionProxy>

@property (readonly, nonatomic, getter=_isExtensionBeingDebugged) BOOL _extensionBeingDebugged;
@property (readonly, nonatomic) INCExtensionConnection *_connection;
@property (readonly, nonatomic) NSExtension *_extension;
@property (readonly, nonatomic) id<_INExtensionContextVending> _vendorRemote;
@property (readonly, nonatomic) NSValue *_auditTokenValue;
@property (nonatomic) BOOL shouldCache;
@property (copy, nonatomic) id /* block */ imageCachingHandler;
@property (copy, nonatomic) id /* block */ imageProcessingHandler;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) id /* block */ backgroundAppHandler;
@property (nonatomic) BOOL shouldResetRequestAfterHandle;

+ (void)initialize;

- (void).cxx_destruct;
- (void)handleIntentWithCompletionHandler:(id /* block */)a0;
- (void)confirmIntentWithCompletionHandler:(id /* block */)a0;
- (void)prewarmAppWithIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)startSendingUpdatesToObserver:(id)a0;
- (void)stopSendingUpdates;
- (void)getOptionsForParameterNamed:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDefaultValueForParameterNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void)getOptionsForParameterNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveIntentSlotKeyPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveIntentSlotKeyPaths:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithConnection:(id)a0 extension:(id)a1 vendorRemote:(id)a2 auditTokenValue:(id)a3;
- (BOOL)_shouldForwardToAppWithIntent:(id)a0 intentResponse:(id)a1;
- (BOOL)_extensionProcessHasEntitlement:(id)a0;
- (id)_processIntent:(id)a0 intentResponse:(id)a1 withCacheItems:(id)a2;
- (BOOL)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(id /* block */)a0;
- (void)_issueSandboxExtensionsForFileURLsIfNeededToIntent:(id)a0;

@end
