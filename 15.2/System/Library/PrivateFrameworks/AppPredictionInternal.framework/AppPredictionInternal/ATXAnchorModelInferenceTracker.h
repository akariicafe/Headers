@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (void)persistInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (id)inferenceEventsToTryAgain;
- (void).cxx_destruct;
- (void)clearAllIncompleteInferenceEvents;
- (id)init;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (id)fetchPersistedInferenceEvents;

@end
