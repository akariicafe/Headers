@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager

@property (retain, nonatomic) PARSession *session;

+ (id)sharedManager;

- (void)sendCustomFeedback:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setFeedbackDelegate:(id)a0;
- (void)setPARSession:(id)a0;

@end
