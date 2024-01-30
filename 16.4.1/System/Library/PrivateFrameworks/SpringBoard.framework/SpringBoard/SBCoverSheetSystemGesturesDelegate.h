@class UIViewController, UIPanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, NSString, UIGestureRecognizer, CSCoverSheetDismissGestureSettings;
@protocol SBCoverSheetSystemGestureDelegatePositionProviding;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding>

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIGestureRecognizer *dismissGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *dismissAddendumGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *preemptingGestureRecognizer;
@property (retain, nonatomic) CSCoverSheetDismissGestureSettings *dismissGestureSettings;
@property (weak, nonatomic) id<SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider;
@property (retain, nonatomic) UIPanGestureRecognizer *presentGestureRecognizer;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectPresentGestureRecognizer;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectDismissGestureRecognizer;
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer;
@property (nonatomic) int syntheticAppearState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAnyGestureActivelyRecognized;
- (BOOL)isDismissGestureActive;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)isPresentGestureAllowedToBegin;
- (id)initWithViewController:(id)a0 dismissGestureRecognizer:(id)a1 dismissAddendumGestureRecognizer:(id)a2 dismissalPreemptingGestureRecognizer:(id)a3;
- (BOOL)_areAnyGesturesRecognizedInSet:(id)a0;
- (BOOL)_isGestureActivelyRecognized:(id)a0;
- (id)presentGestures;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)indirectPanEffectiveInterfaceOrientation;
- (BOOL)isDismissGestureAllowedToBegin;
- (BOOL)_isGestureAllowedByTransientOverlaysOrTopmostApp;
- (id)dismissGestures;
- (BOOL)_canPresentGestureBegin;
- (BOOL)_canDismissGestureBegin;
- (BOOL)isPresentGestureActive;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
