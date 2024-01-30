@interface ConversationKit.ParticipantGridViewController : UIViewController {
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ participantsBeforeFocus;
    void /* unknown type, empty encoding */ forceAudioPriorityButton;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ sashedParticipant;
    void /* unknown type, empty encoding */ selectedParticipant;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantGridViewControllerDelegate;
}

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)forceBumpPriority;

@end
