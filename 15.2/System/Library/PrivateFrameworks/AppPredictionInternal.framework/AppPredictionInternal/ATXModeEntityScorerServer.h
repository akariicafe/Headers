@class NSString, NSXPCListener, ATXStableContactRepresentationDatastore;

@interface ATXModeEntityScorerServer : NSObject <ATXModeEntityScorerInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATXStableContactRepresentationDatastore *_stableContactRepresentationDataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)emptyModeEntityScore;
- (void)scoreWidgets:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)scoredNotificationEntityForContactFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1;
- (id)init;
- (id)scoredNotificationEntityForAppFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 reply:(id /* block */)a2;
- (id)dataFromFileHandle:(id)a0;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreNotificationModeEntity:(id)a0 modeEntityScores:(id)a1;
- (void)dealloc;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;
- (BOOL)saveScoredEntitiesToDisk:(id)a0 mode:(id)a1 modeEntityTypeIdentifier:(id)a2;
- (void)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 reply:(id /* block */)a4;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;

@end
