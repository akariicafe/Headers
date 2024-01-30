@interface SiriSetup.VoiceSelectionWelcomeController : OBTableWelcomeController <SUICVoiceSelectionPresenterDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ orbView;
    void /* unknown type, empty encoding */ currentVoiceSelection;
    void /* unknown type, empty encoding */ voiceOptionsView;
    void /* unknown type, empty encoding */ voiceSelectionPresenter;
    void /* unknown type, empty encoding */ continueButton;
}

- (void)presenter:(id)a0 didChangeVoiceSelection:(id)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)chooseForMeTapped;
- (void)continueTapped;

@end
