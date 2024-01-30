@class SBFluidScrunchGestureRecognizer, NSSet, SBIndirectPanGestureRecognizer, SBHomeGesturePanGestureRecognizer, NSString, UIGestureRecognizer, SBSystemGestureManager;
@protocol SBHomeGestureInteractionDelegate;

@interface SBHomeGestureInteraction : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate>

@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *screenEdgePanGestureRecognizer;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectPanGestureRecognizer;
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchGestureRecognizer;
@property (weak, nonatomic) id<SBHomeGestureInteractionDelegate> delegate;
@property (nonatomic) long long recognizedGestureType;
@property (retain, nonatomic) SBSystemGestureManager *gestureManager;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSSet *gestureRecognizers;
@property (readonly, nonatomic) UIGestureRecognizer *recognizedGestureRecognizer;
@property (readonly, nonatomic) double indirectScreenEdgeGestureRecognitionDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleGestureRecognizer:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)_configureGestureRecognizers;
- (id)initWithDelegate:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)invalidate;
- (id)gestureRecognizerForType:(long long)a0;
- (id)initWithSystemGestureManager:(id)a0 delegate:(id)a1;
- (void)_configureScreenEdgePanGestureRecognizer;
- (void)_configureIndirectPanGestureRecognizer;
- (void)_configureScrunchGestureRecognizer;
- (long long)typeOfGestureRecognizer:(id)a0;
- (BOOL)_isGestureRunning:(id)a0;

@end
