@class NSString, TFDataAggregator, TFFeedbackFormViewController, TFFeedbackDataContainer;
@protocol TFFeedbackSubmissionService, TFFeedbackSessionDelegate;

@interface TFFeedbackSession : NSObject <TFDataAggregatorDelegate>

@property (readonly, copy, nonatomic) NSString *logKey;
@property (nonatomic) BOOL didSnapshot;
@property (nonatomic, getter=isWaitingOnAggregatorForSubmission) BOOL waitingOnAggregatorForSubmission;
@property (nonatomic) unsigned long long currentPhase;
@property (readonly, nonatomic) TFFeedbackDataContainer *dataContainer;
@property (readonly, nonatomic) TFDataAggregator *aggregator;
@property (readonly, nonatomic) id<TFFeedbackSubmissionService> submissionService;
@property (weak, nonatomic) TFFeedbackFormViewController *activeFormViewController;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<TFFeedbackSessionDelegate> delegate;
@property (nonatomic) BOOL forcePrefilledEmailViewVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dataAggregator:(id)a0 didCompleteTasks:(id)a1;
- (void)submitFeedbackForActiveFormViewController;
- (void)initiateFeedbackSnapshot;
- (id)_generateFormForCurrentState;
- (void)_beginFeedbackSubmisionForViewController:(id)a0;
- (void)_associateEmail:(id)a0;
- (void)_abortFeedbackSubmissionForViewController:(id)a0 withError:(id)a1;
- (void)_finishFeedbackSubmissionForViewController:(id)a0;
- (id)_displayableErrorMessageFromService:(id)a0 submissionError:(id)a1;
- (id)initForContext:(unsigned long long)a0 betaApplicationIdentifier:(id)a1;
- (void)associateIncidentId:(id)a0;
- (void)associateScreenshotImages:(id)a0;
- (id)createFeedbackViewControllerForCurrentState;
- (id)initWithBetaApplicationIdentifier:(id)a0;

@end
