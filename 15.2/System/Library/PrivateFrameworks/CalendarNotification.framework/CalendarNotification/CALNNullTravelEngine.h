@class NSString;
@protocol CALNTravelEngineDelegate;

@interface CALNNullTravelEngine : NSObject <CALNTravelEngine>

@property (class, readonly, nonatomic) CALNNullTravelEngine *sharedInstance;

@property (weak, nonatomic) id<CALNTravelEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void).cxx_destruct;

@end
