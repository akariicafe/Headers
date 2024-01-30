@class NSString, ATXNotificationDigestRankingConstants;
@protocol ATXNotificationDigestFeedbackProtocol, ATXNotificationQuantityProviderProtocol;

@interface ATXDigestGlobalNotificationFeedbackPipeline : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _feedbackStore;
    id<ATXNotificationQuantityProviderProtocol> _notificationQuantityProvider;
    NSString *_lastRunTimestampUserDefaultsKey;
    ATXNotificationDigestRankingConstants *_c;
}

- (id)init;
- (void).cxx_destruct;
- (void)logGlobalNotificationStatisticsToDigestFeedbackWithXPCActivity:(id)a0;
- (id)initWithFeedbackStore:(id)a0 notificationQuantityProvider:(id)a1 lastRunTimestampKey:(id)a2 constants:(id)a3;

@end
