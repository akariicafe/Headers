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

+ (const struct TSWPLineFragment { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; double x4; double x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; } x8; struct TSWPListLabel *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef *x0; struct TSWPLineRef *x1; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef *x0; } x2; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef *x0; struct TSWPLineRef *x1; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef *x0; } x2; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef *x0; struct TSWPLineRef *x1; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef *x0; } x2; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; struct TSWPAdornmentLine *x1; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; } x2; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; struct TSWPAdornmentLine *x1; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; } x2; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; struct TSWPAdornmentLine *x1; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; } x2; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; struct TSWPAdornmentLine *x1; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine *x0; } x2; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData *x0; struct TSWPUIAttachmentData *x1; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData *x0; } x2; } x19; struct TSWPTypesettingState *x20; double x21; double x22; double x23; id x24; id x25; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments *x0; struct TSWPAdornments *x1; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments *x0; } x2; } x26; struct TSWPAdornmentLine *x27; id x28; unsigned int x29; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct *x0; struct *x1; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct *x0; } x2; } x30; id x31; double x32; id x33; struct CGColor *x34; double x35; unsigned short x36; } *)p_lineFragmentForCharIndex:(unsigned long long)a0 knobTag:(unsigned long long)a1 selectionType:(int)a2 rep:(id)a3;

- (double)delay;
- (void)dealloc;
- (id)icc;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)a0;
- (double)unscaledStartAutoscrollThreshold;
- (BOOL)shouldHideOtherKnobs;
- (void)moveKnobToCanvasPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)endMovingKnob;
- (id)initWithRep:(id)a0 knob:(id)a1;
- (void)p_magnifyWithTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3 delayed:(BOOL)a4;
- (void)p_cleanupWhenDone;
- (void)p_stopMagnifyingWithAnimation:(BOOL)a0;
- (void)p_setSelectionFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_fixUpWordSelection;
- (unsigned long long)p_charIndexForKnob:(unsigned long long)a0 selection:(id)a1;
- (BOOL)p_isMagnifyingVerticalText;
- (id)p_rangedMagnifier;
- (void)p_startMagnifying;
- (BOOL)p_newHeadCharIndex:(unsigned long long)a0 isPastTailCharIndex:(unsigned long long)a1 rep:(id)a2;
- (BOOL)p_newTailCharIndex:(unsigned long long)a0 isPastHeadCharIndex:(unsigned long long)a1 rep:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })adjustSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forStorage:(id)a1;
- (BOOL)fixupWordSelection;
- (void)updateAfterAutoscroll:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
