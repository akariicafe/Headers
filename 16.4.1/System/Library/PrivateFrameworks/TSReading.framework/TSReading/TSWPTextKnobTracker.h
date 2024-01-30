@class NSTimer, TSWPEditingController, TSWPTextMagnifierRanged;

@interface TSWPTextKnobTracker : TSDKnobTracker {
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeAtStart;
    int _selectionType;
    unsigned long long _headCharAtStart;
    unsigned long long _tailCharAtStart;
    BOOL _multiTap;
    NSTimer *_textMagnifierTimer;
    TSWPTextMagnifierRanged *_magnifier;
    BOOL _doneTracking;
    BOOL _knobMoved;
}

@property (retain, nonatomic) TSWPEditingController *editingController;
@property (readonly, nonatomic) BOOL didShowMagnifier;
@property (nonatomic) BOOL ignoreNextCall;

+ (const void *)p_lineFragmentForCharIndex:(unsigned long long)a0 knobTag:(unsigned long long)a1 selectionType:(int)a2 rep:(id)a3;

- (double)delay;
- (void)dealloc;
- (void)autoscrollWillNotStart;
- (id)icc;
- (void)p_magnifyWithTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3 delayed:(BOOL)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })adjustSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forStorage:(id)a1;
- (void)endMovingKnob;
- (BOOL)fixupWordSelection;
- (id)initWithRep:(id)a0 knob:(id)a1;
- (void)moveKnobToCanvasPosition:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)p_charIndexForKnob:(unsigned long long)a0 selection:(id)a1;
- (void)p_cleanupWhenDone;
- (void)p_fixUpWordSelection;
- (BOOL)p_isMagnifyingVerticalText;
- (BOOL)p_newHeadCharIndex:(unsigned long long)a0 isPastTailCharIndex:(unsigned long long)a1 rep:(id)a2;
- (BOOL)p_newTailCharIndex:(unsigned long long)a0 isPastHeadCharIndex:(unsigned long long)a1 rep:(id)a2;
- (id)p_rangedMagnifier;
- (void)p_setSelectionFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_startMagnifying;
- (void)p_stopMagnifyingWithAnimation:(BOOL)a0;
- (BOOL)shouldHideOtherKnobs;
- (double)unscaledStartAutoscrollThreshold;
- (void)updateAfterAutoscroll:(id)a0;
- (void)updateAfterAutoscroll:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
