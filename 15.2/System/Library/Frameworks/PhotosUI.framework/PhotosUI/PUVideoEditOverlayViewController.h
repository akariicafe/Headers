@class PXUISubjectTrackingView, NUMediaView, NSString;
@protocol PUVideoEditOverlayViewControllerDelegate;

@interface PUVideoEditOverlayViewController : UIViewController <PXSubjectTrackingViewDelegate>

@property (retain, nonatomic) PXUISubjectTrackingView *trackingView;
@property (retain, nonatomic) NUMediaView *mediaView;
@property (weak, nonatomic) id<PUVideoEditOverlayViewControllerDelegate> overlayControllerDelegate;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newTrackingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialState:(long long)a1;
- (id)newFocusStatusBadge;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFocusStateBadge:(id)a0;
- (void)setTrackingInProgressTextForFocusStateBadge:(id)a0;
- (void)trackingWasEditedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setMessage:(id)a0 forFocusStateBadge:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })unadjustedTimeForPlayerTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)subjectTrackingStateDidChange:(long long)a0 forView:(id)a1 animated:(BOOL)a2;
- (void)subjectFocusStateDidChange:(long long)a0 forBadge:(id)a1 focusedDisparity:(double)a2;
- (void)objectTrackingStartedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 shouldStop:(BOOL *)a1;
- (void)objectTrackingFinishedWithSuccess:(BOOL)a0;
- (id)initWithMediaView:(id)a0 cineController:(id)a1;
- (void)renderDidChange:(BOOL)a0;
- (void)scriptDidUpdate;
- (void)setNeedsUpdateTrackingFrame;
- (void)trackingWasEdited;
- (void)_setState:(long long)a0 forView:(id)a1 animated:(BOOL)a2;
- (void)showTrackingInformationalMessage:(long long)a0;
- (void)loadView;
- (id)composition;
- (void).cxx_destruct;
- (void)interactionBegan;
- (id)compositionController;

@end
