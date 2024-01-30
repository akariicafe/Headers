@class ATXUserNotificationDigestBiomeStream, ATXDNDModeConfigurationClient, ATXMissedNotificationRankingBiomeStream, ATXNotificationDigestRankerClient;
@protocol ATXModeEntityScorerProtocol;

@interface ATXNotificationDigestGeneratorClient : NSObject {
    ATXMissedNotificationRankingBiomeStream *_missedNotificationRankingStream;
    ATXUserNotificationDigestBiomeStream *_digestStream;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    id<ATXModeEntityScorerProtocol> _modeEntityScorer;
    ATXNotificationDigestRankerClient *_digestRankerClient;
}

- (id)models;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMissedNotificationRankingBiomeStream:(id)a0 notificationDigestBiomeStream:(id)a1 modeConfigurationClient:(id)a2 modeEntityScorer:(id)a3;
- (id)_rankerForRankingType:(long long)a0;
- (id)generateMissedNotificationRankingForNotifications:(id)a0 modeId:(id)a1 rankingType:(long long)a2;
- (id)generateMissedNotificationRankingForNotifications:(id)a0 modeId:(id)a1;
- (id)generateMissedNotificationRankingForNotificationArrays:(id)a0 modeUUID:(id)a1 rankingType:(long long)a2;
- (id)_flattenNestedNotificationArrays:(id)a0;
- (id)generateDigestForNotifications:(id)a0 digestTime:(long long)a1 rankingType:(long long)a2;
- (id)generateDigestForNotificationArrays:(id)a0 digestTime:(long long)a1 rankingType:(long long)a2;
- (void)generateMissedNotificationRankingForNotificationArrays:(id)a0 atxMode:(unsigned long long)a1 rankingType:(long long)a2 reply:(id /* block */)a3;
- (id)overallDigestScoreModel;
- (id)generateMissedNotificationRankingForNotifications:(id)a0 modeUUID:(id)a1;
- (id)generateMissedNotificationRankingForNotifications:(id)a0 modeUUID:(id)a1 rankingType:(long long)a2;
- (id)generateMissedNotificationRankingForNotificationArrays:(id)a0 modeUUID:(id)a1;
- (id)generateDigestForNotifications:(id)a0 digestTime:(long long)a1;
- (id)generateDigestForNotificationArrays:(id)a0 digestTime:(long long)a1;
- (void)generateDigestForNotificationArrays:(id)a0 reply:(id /* block */)a1;
- (void)generateMissedNotificationRankingForNotificationArrays:(id)a0 modeUUID:(id)a1 reply:(id /* block */)a2;

@end
