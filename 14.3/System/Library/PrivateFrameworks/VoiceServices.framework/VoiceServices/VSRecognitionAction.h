@class NSString, NSAttributedString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject {
    NSString *_resultString;
    NSString *_statusString;
    union { NSString *stringValue; NSAttributedString *attributedStringValue; } _spokenString;
    VSRecognitionSession *_session;
    unsigned char _spokenStringIsAttributed : 1;
}

- (id)perform;
- (id)cancel;
- (id)_session;
- (void)dealloc;
- (int)completionType;
- (void)_continueAfterDeferredStart;
- (BOOL)_hasDeferredStartCallback;
- (void)_setSession:(id)a0;
- (id)spokenFeedbackString;
- (id)spokenFeedbackAttributedString;
- (id)resultDisplayString;
- (id)statusDisplayString;
- (BOOL)sensitiveActionsEnabled;
- (void)setResultDisplayString:(id)a0;
- (void)setStatusDisplayString:(id)a0;
- (void)setSpokenFeedbackString:(id)a0;
- (void)setSpokenFeedbackAttributedString:(id)a0;
- (void)completeWithNextAction:(id)a0 error:(id)a1;

@end
