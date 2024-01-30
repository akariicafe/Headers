@class NSMutableDictionary;

@interface ATXFakeModeEntityScorer : NSObject <ATXModeEntityScorerProtocol> {
    double _defaultAppScore;
    double _defaultContactScore;
    NSMutableDictionary *_entityToScoreMapping;
}

+ (unsigned long long)atxModeFromString:(id)a0;

- (void)scoreApps:(id)a0 mode:(unsigned long long)a1;
- (id)rankedAppsForNotificationsForMode:(unsigned long long)a0;
- (void)scoreUserNotifications:(id)a0 mode:(unsigned long long)a1;
- (id)rankedNotificationsForMode:(unsigned long long)a0;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1;
- (void)scoreUserNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)rankedContactsForMode:(unsigned long long)a0;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedAppsForMode:(unsigned long long)a0;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreWidgets:(id)a0 mode:(unsigned long long)a1;
- (id)rankedWidgetsForMode:(unsigned long long)a0;
- (id)rankedContactsForNotificationsForMode:(unsigned long long)a0;
- (void)setScoreForEntity:(id)a0 score:(double)a1;
- (void)setDefaultScoreForAllApps:(double)a0;
- (void)setDefaultScoreForAllContacts:(double)a0;
- (void)setScoreForBundleId:(id)a0 score:(double)a1;
- (void)setScoreForContactId:(id)a0 score:(double)a1;

@end
