@interface CNKMostActiveParticipantViewController : UIViewController {
    void /* unknown type, empty encoding */ remoteParticipants;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ ignoreFocusedParticipantUpdates;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteParticipantView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localParticipantView;
    void /* unknown type, empty encoding */ localParticipantViewConstraints;
    void /* unknown type, empty encoding */ supportedDeviceOrientations;
    void /* unknown type, empty encoding */ shouldShowActionTypePhotoCapture;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ isVisibleInPIP;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flashView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_insulatingView;
    void /* unknown type, empty encoding */ hasInitializedMomentsViews;
}

@property (nonatomic) void /* unknown type, empty encoding */ frontBoardInterfaceOrientation;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
