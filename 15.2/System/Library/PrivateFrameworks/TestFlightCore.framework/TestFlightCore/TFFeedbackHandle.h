@class NSString, TFFeedbackHandleConfiguration, SBSRemoteAlertHandle;

@interface TFFeedbackHandle : NSObject <SBSRemoteAlertHandleObserver>

@property (readonly, nonatomic) TFFeedbackHandleConfiguration *configuration;
@property (retain, nonatomic) SBSRemoteAlertHandle *internalHandle;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)presentFeedbackViewController;
- (void)invalidateFeedbackViewController;

@end
