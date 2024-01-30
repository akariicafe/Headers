@class NSXPCConnection;

@interface ATXModeEntityScorerClient : NSObject <ATXModeEntityScorerInterface> {
    NSXPCConnection *_xpcConnection;
}

- (void)scoreWidgets:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (void)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 reply:(id /* block */)a4;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;

@end
