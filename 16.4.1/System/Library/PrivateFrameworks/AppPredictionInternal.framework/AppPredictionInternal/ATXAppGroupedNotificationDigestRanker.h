@class ATXNotificationDigestRankingConstants;
@protocol ATXNotificationDigestFeedbackProtocol;

@interface ATXAppGroupedNotificationDigestRanker : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
}

- (id)init;
- (void).cxx_destruct;
- (id)bfsSelectGlobalMarqueeGroupsFromApps:(id)a0 maxCount:(unsigned long long)a1 groupFilter:(id /* block */)a2;
- (id)createDigestForAppGroupedNotificationStacks:(id)a0 maxGlobalMarqueeGroups:(unsigned long long)a1 maxAppMarqueeGroups:(unsigned long long)a2 outError:(id *)a3;
- (id)getRankedAppsFromAppGroupedNotificationStacks:(id)a0 maxAppMarqueeGroups:(unsigned long long)a1;
- (id)initWithDigestFeedback:(id)a0;

@end
