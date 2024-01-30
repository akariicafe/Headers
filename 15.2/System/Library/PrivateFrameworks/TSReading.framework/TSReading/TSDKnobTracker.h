@class TSDAutoscroll, TSDInteractiveCanvasController, TSDRep, TSDKnob;

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker>

@property (nonatomic) BOOL didDrag;
@property (readonly, nonatomic) TSDInteractiveCanvasController *icc;
@property (retain, nonatomic) TSDRep *rep;
@property (retain, nonatomic) TSDKnob *knob;
@property (readonly, nonatomic) BOOL didBegin;
@property (nonatomic) BOOL dragEnding;
@property (readonly, nonatomic) double delay;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (readonly, nonatomic) BOOL endedOperationDueToESC;
@property (nonatomic) BOOL isInspectorDrivenTracking;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } knobOffset;
@property (retain, nonatomic) TSDAutoscroll *autoscroll;

- (void)dealloc;
- (void)autoscrollWillNotStart;
- (unsigned long long)enabledKnobMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentBoundsForStandardKnobs;
- (BOOL)shouldHideSelectionHighlight;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformInRootForStandardKnobs;
- (struct CGPoint { double x0; double x1; })convertKnobPositionToUnscaledCanvas:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldUseKnobOffset;
- (void)i_setKnobOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsAutoscroll;
- (BOOL)allowHUDToDisplay;
- (void)updateAfterAutoscroll:(id)a0;
- (double)unscaledStartAutoscrollThreshold;
- (int)allowedAutoscrollDirections;
- (BOOL)supportsAlignmentGuides;
- (BOOL)operationShouldBeDynamic;
- (void)commitChangesForReps:(id)a0;
- (void)changeDynamicLayoutsForReps:(id)a0;
- (void)moveKnobToRepPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldHideOtherKnobs;
- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;
- (void)beginMovingKnob;
- (void)moveKnobToCanvasPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)endMovingKnob;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)a0;
- (id)initWithRep:(id)a0 knob:(id)a1;
- (BOOL)shouldEndMovingKnobOnESC;
- (void)willEndMovingKnobDueToESC;

@end
