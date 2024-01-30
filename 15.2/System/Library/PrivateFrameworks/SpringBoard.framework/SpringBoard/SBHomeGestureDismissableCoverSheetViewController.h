@class SBFZStackParticipant, NSString, SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate>

@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer;
@property (nonatomic) BOOL wantsHomeGestureOwnership;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly, nonatomic) long long homeGestureParticipantIdentifier;
@property (readonly, nonatomic) long long zStackParticipantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_requestHomeGestureOwnership;
- (void)zStackParticipantDidChange:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)_relinquishHomeGestureOwnership;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_handleBottomEdgeGesture:(id)a0;
- (void)_handleBottomEdgeGestureBegan:(id)a0;
- (void)_handleBottomEdgeGestureChanged:(id)a0;
- (void)_handleBottomEdgeGestureEnded:(id)a0;
- (BOOL)shouldDismissForHomeGestureRecognizer:(id)a0;

@end
