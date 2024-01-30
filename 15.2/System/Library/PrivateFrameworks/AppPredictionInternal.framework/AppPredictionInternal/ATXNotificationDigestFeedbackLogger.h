@protocol ATXNotificationDigestFeedbackProtocol;

@interface ATXNotificationDigestFeedbackLogger : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _digestFeedback;
}

- (void).cxx_destruct;
- (id)init;
- (void)logFeedbackForAnnotatedDigest:(id)a0;
- (id)initWithDigestFeedback:(id)a0;
- (id)_getBundleIdAndEngagementsForDigestGroup:(id)a0 onDigest:(id)a1;

@end
