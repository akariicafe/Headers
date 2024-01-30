@interface VSRecognitionSpeakAction : VSRecognitionAction {
    BOOL _shouldTerminate;
}

- (id)perform;
- (int)completionType;
- (id)initWithSpokenFeedbackString:(id)a0 willTerminate:(BOOL)a1;

@end
