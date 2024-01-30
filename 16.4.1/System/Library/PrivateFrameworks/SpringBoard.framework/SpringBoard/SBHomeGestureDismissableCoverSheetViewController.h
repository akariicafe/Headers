@class SBFZStackParticipant, NSString, SBHomeGesturePanGestureRecognizer;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate>

@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer;
@property (nonatomic) BOOL wantsHomeGestureOwnership;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly, nonatomic) long long zStackParticipantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_relinquishHomeGestureOwnership;
- (void)_handleBottomEdgeGestureEnded:(id)a0;
- (void)_requestHomeGestureOwnership;
- (void)_handleBottomEdgeGestureChanged:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_handleBottomEdgeGestureBegan:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_handleBottomEdgeGesture:(id)a0;
- (BOOL)shouldDismissForHomeGestureRecognizer:(id)a0;

@end
