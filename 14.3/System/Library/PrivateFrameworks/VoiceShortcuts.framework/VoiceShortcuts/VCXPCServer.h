@class NSXPCListener, VCCKShortcutSyncCoordinator, WFTriggerManager, NSXPCListenerEndpoint, VCVoiceShortcutManager, VCCoreDuetListener, NSString;
@protocol VCSyncDataEndpoint, VCDatabaseProvider;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>

@property (readonly, nonatomic) BOOL skipEntitlementsCheck;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCCoreDuetListener *coreDuetListener;
@property (readonly, nonatomic) VCCKShortcutSyncCoordinator *syncCoordinator;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithXPCListener:(id)a0 databaseProvider:(id)a1 coreDuetListener:(id)a2 syncCoordinator:(id)a3 syncDataEndpoint:(id)a4;
- (id)exportedXPCInterface;
- (id)initWithDatabaseProvider:(id)a0 coreDuetListener:(id)a1 syncCoordinator:(id)a2 syncDataEndpoint:(id)a3;

@end
