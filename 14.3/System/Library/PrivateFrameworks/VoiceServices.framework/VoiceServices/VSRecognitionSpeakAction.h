@interface VSRecognitionSpeakAction : VSRecognitionAction {
    BOOL _shouldTerminate;
}

- (id)perform;
- (id)initWithSpokenFeedbackString:(id)a0 willTerminate:(BOOL)a1;
- (int)completionType;

@end
