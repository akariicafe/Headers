@class NSString, _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl;
@protocol _TtP34SiriCrossDeviceArbitrationFeedback7Globals_, SCDAFFeedbackServiceDelegate;

@interface SCDAFFeedbackService : NSObject <SiriCrossDeviceArbitrationFeedback.FeedbackServiceDelegate>

@property (retain, nonatomic) id<_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> globals;
@property (retain, nonatomic) _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl *feedbackService;
@property (weak, nonatomic) id<SCDAFFeedbackServiceDelegate> delegate;
@property (copy, nonatomic) NSString *localDeviceAssistantIdentifier;

+ (id)sharedService;

- (id)_init;
- (void).cxx_destruct;
- (void)handleNotificationAction:(long long)a0;
- (long long)_actionFromSCDAFFeedbackAction:(long long)a0;
- (long long)_scdaFeedbackActionFrom:(long long)a0;
- (void)handleAssistantDismissed;
- (void)handleNotificationSCDAFAction:(long long)a0;
- (void)handleReceivedArbitrationParticipation:(id)a0;
- (id)initWithServiceImpl:(id)a0 globals:(id)a1;
- (BOOL)isUserFeedbackFeatureEnabled;

@end
