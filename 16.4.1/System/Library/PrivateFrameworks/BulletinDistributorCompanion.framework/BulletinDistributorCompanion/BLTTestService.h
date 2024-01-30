@class NSXPCConnection;

@interface BLTTestService : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedTestService;

- (void)dealloc;
- (void)_connectIfNecessary;
- (id)init;
- (void).cxx_destruct;
- (void)originalSettingsWithCompletion:(id /* block */)a0;
- (void)spoolSectionInfoWithCompletion:(id /* block */)a0;
- (void)settingOverridesWithCompletion:(id /* block */)a0;
- (void)addBulletin:(id)a0 forFeed:(unsigned long long)a1 playLightsAndSirens:(BOOL)a2 attachment:(id)a3 attachmentType:(long long)a4 alwaysSend:(BOOL)a5 completion:(id /* block */)a6;
- (void)addBulletin:(id)a0 forFeed:(unsigned long long)a1 playLightsAndSirens:(BOOL)a2 attachment:(id)a3 attachmentType:(long long)a4 completion:(id /* block */)a5;
- (void)clearSectionInfoSentCacheWithCompletion:(id /* block */)a0;
- (void)disableStandaloneTestModeWithCompletion:(id /* block */)a0;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)a0 maximumSendDelay:(unsigned long long)a1 minimumResponseDelay:(unsigned long long)a2 maximumResponseDelay:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)getStandaloneTestModeEnabledWithCompletion:(id /* block */)a0;
- (void)logFaultWithCompletion:(id /* block */)a0;
- (void)overriddenSettingsWithCompletion:(id /* block */)a0;
- (void)removeSectionID:(id)a0 completion:(id /* block */)a1;
- (void)sendAllSectionInfoWithSpool:(BOOL)a0 completion:(id /* block */)a1;
- (void)sendSectionInfoWithSectionID:(id)a0 completion:(id /* block */)a1;
- (void)simulateAnalytics:(id)a0 completion:(id /* block */)a1;
- (void)willAlertForSectionID:(id)a0 subtype:(long long)a1 completion:(id /* block */)a2;

@end
