@class NSArray, NSString, TITypingSessionAligned, TITypingSession;
@protocol TIMetricProviding, TIUserModeling;

@interface TIAutocorrectionFeedbackAnalyzer : NSObject <TITypingSessionAnalyzing, TIFeedbackControllerDelegate> {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
}

@property (retain, nonatomic) NSArray *supportedLanguages;
@property (retain, nonatomic) id<TIUserModeling, TIMetricProviding> userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyzerForUserModel:(id)a0;

- (void)registerEventSpec;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)initWithUserModel:(id)a0;
- (void).cxx_destruct;
- (void)resetWordCounts;
- (void)accumulateWordCounts;
- (id)installedInputModesStringFromInputModes:(id)a0;
- (void)sendCompletionEventUsingStudyDataFromFeedbackController:(id)a0;
- (void)sendInitiationEventUsingStudyDataFromFeedbackController:(id)a0;
- (void)sendTerminationEventUsingStudyDataFromFeedbackController:(id)a0;
- (long long)studyStatusFromState:(long long)a0;

@end
