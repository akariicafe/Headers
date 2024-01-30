@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager

@property (retain, nonatomic) PARSession *session;

+ (id)sharedManager;

- (void)sendCustomFeedback:(id)a0;
- (id)init;
- (void)setFeedbackDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setPARSession:(id)a0;

@end
