@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)init;
- (void).cxx_destruct;
- (void)persistInferenceEvent:(id)a0;
- (id)fetchPersistedInferenceEvents;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)clearAllIncompleteInferenceEvents;
- (id)inferenceEventsToTryAgain;

@end
