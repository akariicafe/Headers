@class NSString, ATXNotificationDigestRankingConstants;
@protocol ATXNotificationDigestFeedbackProtocol, ATXNotificationQuantityProviderProtocol;

@interface ATXDigestGlobalNotificationFeedbackPipeline : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _feedbackStore;
    id<ATXNotificationQuantityProviderProtocol> _notificationQuantityProvider;
    NSString *_lastRunTimestampUserDefaultsKey;
    ATXNotificationDigestRankingConstants *_c;
}

- (void).cxx_destruct;
- (id)init;
- (void)logGlobalNotificationStatisticsToDigestFeedbackWithXPCActivity:(id)a0;
- (id)initWithFeedbackStore:(id)a0 notificationQuantityProvider:(id)a1 lastRunTimestampKey:(id)a2 constants:(id)a3;

@end
