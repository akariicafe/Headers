@interface CNKMostActiveParticipantViewController : UIViewController {
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantView;
    void /* unknown type, empty encoding */ shouldShowActionTypePhotoCapture;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flashView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_insulatingView;
}

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
