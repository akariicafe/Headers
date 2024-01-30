@class NSLayoutYAxisAnchor, UIView, NSLayoutConstraint, HUCameraBadgeView, NADecayingTimer, HMCameraSource, HUCameraErrorContent, HMCameraView, HURemoteContextHostingView, NSArray, UIActivityIndicatorView, HUCameraErrorView, UIImageView;

@interface HUCameraView : UIView

@property (readonly, nonatomic) HMCameraView *cameraView;
@property (readonly, nonatomic) HURemoteContextHostingView *cameraContainerView;
@property (readonly, nonatomic) HUCameraBadgeView *badgeView;
@property (readonly, nonatomic) UIView *cameraOverlayView;
@property (retain, nonatomic) UIView *cameraDimmingView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) HUCameraErrorView *errorView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSLayoutConstraint *cameraAspectRatioConstraint;
@property (retain, nonatomic) NSLayoutConstraint *badgeBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *badgeTrailingConstraint;
@property (retain, nonatomic) UIImageView *demoSnapshotImageView;
@property (nonatomic) unsigned long long maskedCameraCorners;
@property (retain, nonatomic) HMCameraSource *cameraSource;
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } badgeOffset;
@property (retain, nonatomic) NSLayoutYAxisAnchor *badgeBottomAnchor;
@property (retain, nonatomic) HUCameraErrorContent *errorContent;
@property (nonatomic) BOOL showActivityIndicator;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cameraContentFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } derivedCameraContentFrame;
@property (readonly, nonatomic) UIView *cameraOverlaySnapshot;
@property (nonatomic) BOOL shouldRespectAspectRatio;

+ (BOOL)requiresConstraintBasedLayout;

- (void)layoutSubviews;
- (void)setContentMode:(long long)a0;
- (void)_updateBadgeView;
- (id)backgroundColor;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;
- (double)_continuousCornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)setCameraSource:(id)a0 withDemoSnapshotURL:(id)a1 animated:(BOOL)a2;
- (void)setCameraSource:(id)a0 animated:(BOOL)a1;
- (void)setErrorContent:(id)a0 animated:(BOOL)a1;
- (id)initWithBadgeView:(id)a0;
- (void)_updateMaskedCameraCorners;
- (long long)contentModeForAspectRatio:(double)a0;
- (void)setCameraContentMode:(long long)a0;
- (void)_updateErrorAndActivityIndicatorVisibilityAnimated:(BOOL)a0;
- (void)setShowActivityIndicator:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(BOOL)a0;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)a0;
- (id)cameraContentSnapshot;

@end
