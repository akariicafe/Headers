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
    void /* unknown type, empty encoding */ menuHostViewController;
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
- (void)willMoveToParentViewController:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityEffectsLabel;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityRouteLabel;
- (id)accessibilityCameraButton;
- (id)accessibilityDisableVideoLabel;
- (id)accessibilityEffectsButton;
- (id)accessibilityHotdog;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityRouteButton;
- (void)didTapEffectsButton:(id)a0;
- (void)didTapFlipCameraButton:(id)a0;
- (void)didTapJoinLeaveButton:(id)a0;
- (void)didTapMuteButton:(id)a0;
- (void)didTapScreenShareButton:(id)a0;
- (void)didTapToggleCameraButton:(id)a0;
- (void)didTapToggleCinematicFramingButton:(id)a0;
- (void)embedEffectsBrowserViewController:(id)a0;
- (void)updateAudioRouteButtonFor:(id)a0;
- (void)updateControlsVisibilityForExpandedState:(BOOL)a0;
- (void)updateToRepresentLegacyCall:(id)a0;

@end
