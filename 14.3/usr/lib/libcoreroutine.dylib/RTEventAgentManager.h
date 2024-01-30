@class RTPlatform, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RTEventAgentManager : NSXPCListener <NSXPCListenerDelegate, RTEventAgentDaemonProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *pluginConnection;
@property (retain, nonatomic) RTPlatform *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (id)initWithPlatform:(id)a0;
- (void)checkin;
- (void)_setup;
- (id)init;
- (void)_launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)dealloc;
- (void)onLaunchDaemonWithRestorationIdentifierFromDefaults;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
