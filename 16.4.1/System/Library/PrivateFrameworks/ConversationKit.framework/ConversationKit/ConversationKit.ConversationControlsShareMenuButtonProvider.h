@interface ConversationKit.ConversationControlsShareMenuButtonProvider : ConversationKit.ConversationControlsMenuButtonProvider {
    void /* unknown type, empty encoding */ foregroundAppCancellable;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ contentInsets;
    void /* unknown type, empty encoding */ shareScreenCountdownView;
    void /* unknown type, empty encoding */ screenSharingActionIdentifier;
}

- (void)capturedDidChangeNotification:(id)a0;
- (void)screenSharingButtonPressed;
- (void)setAutomaticShareState:(BOOL)a0;

@end
