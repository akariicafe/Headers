@interface SnippetUI.UEIKeyboardInvocationEvent : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ instrumentationClient;
    void /* unknown type, empty encoding */ keyboardPrimaryLanguage;
}

@property (nonatomic, readonly) BOOL requiresNewTurn;

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;

@end
