@class NSString;

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>

@property BOOL observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)stopObserving;
- (void)dealloc;
- (void)dispose;
- (id)extensionPoint;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleNewFlow:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleReport:(id)a0;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)a0;
- (void)provideURLAppendStringMap:(id)a0;

@end
