@class NEExtensionProviderHostContext, NSString, NSArray, NSXPCInterface, NSUUID, NSObject, NSExtension;
@protocol OS_dispatch_queue, NEPluginManagerObjectFactory, OS_dispatch_source;

@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver> {
    NSUUID *_sessionRequestIdentifier;
    NSString *_extensionPointIdentifier;
    NSExtension *_extension;
    NSArray *_extensionUUIDs;
    id /* block */ _pendingDisposeCompletion;
}

@property (readonly, weak) id<NEPluginManagerObjectFactory> managerObjectFactory;
@property (retain, nonatomic) NEExtensionProviderHostContext *sessionContext;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *pluginType;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly) NSXPCInterface *managerProtocol;
@property (readonly) NSXPCInterface *driverProtocol;
@property BOOL appsUpdateStarted;
@property BOOL appsUpdateEnding;
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer;
@property (readonly, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfiguration:(id)a0;
- (void)dealloc;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)wakeup;
- (void)extension:(id)a0 didFailWithError:(id)a1;
- (void)extension:(id)a0 didStartWithError:(id)a1;
- (void)extensionDidStop:(id)a0;
- (void)handleAppsUninstalled:(id)a0;
- (void)handleAppsUpdateBegins:(id)a0;
- (void)handleAppsUpdateEnding:(id)a0;
- (void)handleAppsUpdateEnds:(id)a0;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(id /* block */)a0;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)a0;
- (void)handleInitWithCompletionHandler:(id /* block */)a0;
- (id)initWithPluginType:(id)a0 pluginClass:(long long)a1 pluginEndpoint:(id)a2 pluginProcessIdentity:(id)a3 queue:(id)a4 factory:(id)a5;
- (id)initWithPluginType:(id)a0 pluginClass:(long long)a1 pluginInfo:(id)a2 queue:(id)a3 factory:(id)a4;
- (void)sendExtensionFailed;
- (void)startWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
