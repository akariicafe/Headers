@interface CNKCoreAnalyticsReporter : NSObject

@property (class, nonatomic, readonly) CNKCoreAnalyticsReporter *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)reportCanceledSOSCountdownToCall:(double)a0;
- (void)reportCanceledSOSCountdownToNotify:(double)a0;
- (void)reportIncompatibilityTypeNoneWithRecipientCount:(long long)a0 reason:(long long)a1;
- (void)reportIncompatibilityTypeLegacyWithRecipientCount:(long long)a0 reason:(long long)a1;
- (void)reportIncompatibilityTypeWebWithRecipientCount:(long long)a0 reason:(long long)a1;
- (void)reportIncompatibilityTypeInvalidWithRecipientCount:(long long)a0 reason:(long long)a1;

@end
