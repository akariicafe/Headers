@class PKTextInputElementContent, PKTextInputFeedbackController, NSTimer, PKTextInputTextPlaceholder, NSString;
@protocol PKTextInputReserveSpaceControllerDelegate;

@interface PKTextInputReserveSpaceController : NSObject <PKTextInputDebugStateReporting>

@property (readonly, nonatomic) PKTextInputFeedbackController *feedbackController;
@property (nonatomic, setter=_setReserveSpaceState:) long long _reserveSpaceState;
@property (retain, nonatomic, setter=_setTargetElementContent:) PKTextInputElementContent *_targetElementContent;
@property (nonatomic) struct CGPoint { double x; double y; } _targetPointInElement;
@property (nonatomic) long long _insertionCharacterLocation;
@property (nonatomic) BOOL _wasAskedToReserveSpace;
@property (nonatomic) BOOL _canvasControllerIsDrawing;
@property (retain, nonatomic) PKTextInputTextPlaceholder *_textPlaceholder;
@property (retain, nonatomic) NSTimer *_dismissTimer;
@property (readonly, nonatomic) BOOL isReserveSpaceActive;
@property (readonly, nonatomic) BOOL isReserveSpacePlaceholderVisible;
@property (weak, nonatomic) id<PKTextInputReserveSpaceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_finishAndResetStateInsertingWhitespace:(BOOL)a0;
- (void)_handleAutodismissTimer;
- (void)_insertWhitespaceWithElement:(id)a0 atReferencePoint:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)_moveToContentLoadedIfReady;
- (void)_moveToInsertingPlaceholderIfReady;
- (void)_moveToShowingIntroIfReady;
- (void)_moveToShowingPlaceholderIfReady;
- (long long)_preferredInsertionLocation;
- (void)_startDismissTimerWithDelay:(double)a0;
- (void)_updateReserveSpaceState;
- (void)beginIfPossibleWithElement:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 coordinateSpace:(id)a2;
- (void)cancelReserveSpaceIntro;
- (void)finishReserveSpaceAndInsertWhitespace:(BOOL)a0;
- (id)initWithFeedbackController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderFrameInCoordinateSpace:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)reserveSpaceWhenReady;
- (void)setCanvasControllerIsDrawing:(BOOL)a0;
- (BOOL)tapPointIsInPlaceholder:(struct CGPoint { double x0; double x1; })a0;

@end
