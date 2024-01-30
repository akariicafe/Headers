@class NSString, UIView;

@interface CNKFaceTimeInCallControlsViewController : UIViewController {
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ representedLegacyCallIdentifier;
    void /* unknown type, empty encoding */ controlsButtonRowCount;
    void /* unknown type, empty encoding */ tableViewSeparator;
    void /* unknown type, empty encoding */ collectionViewController;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ gridLayoutStyle;
    void /* unknown type, empty encoding */ topInset;
    void /* unknown type, empty encoding */ participantDelegate;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
}

@property (nonatomic) BOOL videoButtonIsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isExpanded;
@property (nonatomic) void /* unknown type, empty encoding */ audioIsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ videoIsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isScreenSharing;
@property (nonatomic) void /* unknown type, empty encoding */ cinematicFramingIsAvailable;
@property (nonatomic) void /* unknown type, empty encoding */ cinematicFramingIsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ effectsAreAvailable;
@property (nonatomic) void /* unknown type, empty encoding */ effectsAreEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ shouldShowLeaveButton;
@property (nonatomic, readonly) UIView *audioButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) NSString *description;

- (void)handleLegacyCallStatusDidChangeNotification:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapEffectsButton:(id)a0;
- (void)didTapMuteButton:(id)a0;
- (void)didTapFlipCameraButton:(id)a0;
- (void)didTapJoinLeaveButton:(id)a0;
- (void)didTapToggleCameraButton:(id)a0;
- (void)didTapScreenShareButton:(id)a0;
- (void)didTapToggleCinematicFramingButton:(id)a0;
- (void)embedEffectsBrowserViewController:(id)a0;
- (void)updateControlsVisibilityForExpandedState:(BOOL)a0;
- (void)updateAudioRouteButtonFor:(id)a0;
- (void)updateToRepresentLegacyCall:(id)a0;
- (id)accessibilityHotdog;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityEffectsButton;
- (id)accessibilityEffectsLabel;
- (id)accessibilityCameraButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityRouteButton;
- (id)accessibilityRouteLabel;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityDisableVideoLabel;

@end
