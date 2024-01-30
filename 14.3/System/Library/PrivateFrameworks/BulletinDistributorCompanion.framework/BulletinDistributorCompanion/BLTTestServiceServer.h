@class NSXPCListener, NSMutableArray, NSString;

@interface BLTTestServiceServer : NSObject <NSXPCListenerDelegate, BLTTTestServiceServerExportedInterface>

@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTestServer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)addBulletin:(id)a0 forFeed:(unsigned long long)a1 playLightsAndSirens:(BOOL)a2 attachment:(id)a3 attachmentType:(long long)a4 alwaysSend:(BOOL)a5 completion:(id /* block */)a6;
- (void)sendSectionInfoWithSectionID:(id)a0 completion:(id /* block */)a1;
- (void)sendAllSectionInfoWithSpool:(BOOL)a0 completion:(id /* block */)a1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)a0;
- (void)clearSectionInfoSentCacheWithCompletion:(id /* block */)a0;
- (void)getStandaloneTestModeEnabledWithCompletion:(id /* block */)a0;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)a0 maximumSendDelay:(unsigned long long)a1 minimumResponseDelay:(unsigned long long)a2 maximumResponseDelay:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)disableStandaloneTestModeWithCompletion:(id /* block */)a0;
- (void)willAlertForSectionID:(id)a0 subtype:(long long)a1 completion:(id /* block */)a2;
- (void)settingOverridesWithCompletion:(id /* block */)a0;
- (void)originalSettingsWithCompletion:(id /* block */)a0;
- (void)overriddenSettingsWithCompletion:(id /* block */)a0;
- (void)removeSectionID:(id)a0 completion:(id /* block */)a1;
- (void)logFaultWithCompletion:(id /* block */)a0;
- (void)_removeClientConnection:(id)a0;

@end
