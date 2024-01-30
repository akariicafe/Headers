@interface ConversationKit.ConversationControlsShareMenuButton : ConversationKit.ConversationControlsMenuButton {
    void /* unknown type, empty encoding */ foregroundAppCancellable;
    void /* unknown type, empty encoding */ shareScreenCountdownView;
    void /* unknown type, empty encoding */ screenSharingActionIdentifier;
}

- (id)menuFor:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)stopScreenSharing;
- (void)startScreenSharing;
- (void)setAutomaticShareState:(BOOL)a0;
- (void)capturedDidChangeNotification:(id)a0;

@end
