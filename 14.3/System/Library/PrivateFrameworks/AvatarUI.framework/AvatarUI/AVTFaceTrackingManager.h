@class AVTView, AVTUIRaiseGestureManager, FBSDisplayLayoutMonitor, NSTimer, NSString, AVTUIEnvironment, AVTUserInfoView;
@protocol AVTFaceTrackingManagerDelegate;

@interface AVTFaceTrackingManager : NSObject <AVTViewFaceTrackingDelegate, AVTUIRaiseGestureManagerDelegate>

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTUIRaiseGestureManager *raiseGestureManager;
@property (readonly, nonatomic) AVTView *avatarView;
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (retain, nonatomic) NSTimer *lowLightAndSensorOcclusionLockoutTimer;
@property (nonatomic) BOOL shouldRecheckLowLightAndSensorOcclusionState;
@property (retain, nonatomic) NSTimer *trackingLostMessageTimer;
@property (retain, nonatomic) NSTimer *pauseTrackingTimer;
@property (nonatomic) unsigned long long interruptionType;
@property (readonly, copy, nonatomic) NSString *localizedDeviceName;
@property (nonatomic) BOOL faceTrackingManagementPaused;
@property (weak, nonatomic) id<AVTFaceTrackingManagerDelegate> delegate;
@property (readonly, nonatomic) AVTUserInfoView *userInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)desiredUserInfoLabelAlphaForFaceTrackingState:(BOOL)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeFaceTrackingIfNeededAnimated:(BOOL)a0;
- (id)initWithAvatarView:(id)a0 raiseGestureManager:(id)a1 environment:(id)a2;
- (id)initWithAvatarView:(id)a0 raiseGestureManager:(id)a1 userInfoView:(id)a2 environment:(id)a3;
- (void)setupDisplayLayoutMonitor;
- (void)invalidateFaceTrackingTimers;
- (void)cancelLowLightAndSensorOcclusionTimer;
- (void)startTrackingLostTimers;
- (void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)a0 animated:(BOOL)a1;
- (void)resetForResumingTrackingAnimated:(BOOL)a0;
- (id)userInfoStringForCurrentTrackingState;
- (void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)a0;
- (void)updateForTrackingLost;
- (void)updateForPausingTracking;
- (void)updateUserInfoBackdropForCurrentLabel;
- (void)updateForPausingTrackingWithLabel:(BOOL)a0;
- (void)updateInterruptionTypeIfNeeded:(unsigned long long)a0;
- (void)resetForTrackingFoundAFaceAnimated:(BOOL)a0;
- (void)avatarViewDidUpdateWithLowLightOrCameraOcclusionStatus;
- (void)avatarView:(id)a0 didUpdateWithFaceTrackingStatus:(BOOL)a1;
- (void)layoutMonitorDidUpdateDisplayLayout:(id)a0 withContext:(id)a1;
- (void)avatarView:(id)a0 didUpdateWithLowLightStatus:(BOOL)a1;
- (void)avatarView:(id)a0 didUpdateWithSensorOcclusionStatus:(BOOL)a1;
- (void)avatarView:(id)a0 faceTrackingSessionFailedWithError:(id)a1;
- (void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)a0;
- (void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)a0;
- (void)raiseGestureManagerDidRecognizeRaiseGesture:(id)a0;

@end
