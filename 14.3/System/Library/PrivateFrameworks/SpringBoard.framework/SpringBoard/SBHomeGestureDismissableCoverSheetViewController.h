@class SBHomeGestureParticipant, NSString, SBHomeGesturePanGestureRecognizer;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate>

@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer;
@property (nonatomic) BOOL wantsHomeGestureOwnership;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (readonly, nonatomic) long long homeGestureParticipantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_requestHomeGestureOwnership;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_relinquishHomeGestureOwnership;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_handleBottomEdgeGesture:(id)a0;
- (void)_handleBottomEdgeGestureBegan:(id)a0;
- (void)_handleBottomEdgeGestureChanged:(id)a0;
- (void)_handleBottomEdgeGestureEnded:(id)a0;
- (BOOL)shouldDismissForHomeGestureRecognizer:(id)a0;

@end
