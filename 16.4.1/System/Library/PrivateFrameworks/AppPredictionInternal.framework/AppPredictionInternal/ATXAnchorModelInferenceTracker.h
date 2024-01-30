@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)fetchPersistedInferenceEvents;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (id)init;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void)persistInferenceEvent:(id)a0;
- (id)inferenceEventsToTryAgain;
- (void)clearAllIncompleteInferenceEvents;
- (void).cxx_destruct;

@end
