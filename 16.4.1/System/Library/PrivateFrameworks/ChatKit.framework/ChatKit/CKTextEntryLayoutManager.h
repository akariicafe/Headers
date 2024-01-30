@class UIColor, NSMutableDictionary, NSTimer, NSMutableAttributedString;
@protocol CKTextEntryLayoutManagerMentionsDelegate;

@interface CKTextEntryLayoutManager : EMKLayoutManager

@property (retain, nonatomic) NSMutableAttributedString *mentionAttributes;
@property (retain, nonatomic) UIColor *currentMentionColor;
@property (nonatomic) double currentMentionScale;
@property (nonatomic) struct CGSize { double width; double height; } currentMentionOffset;
@property (retain, nonatomic) UIColor *currentMentionShadowColor;
@property (retain, nonatomic) NSMutableDictionary *animationsByIdentifier;
@property (retain, nonatomic) NSTimer *mentionTimer;
@property (weak, nonatomic) id<CKTextEntryLayoutManagerMentionsDelegate> mentionsDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(long long)a2 font:(id)a3 textMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;
- (void)drawAttributedMentionGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isAnyMentionAnimationActive;
- (void)startTimerIfNeeded;
- (void)stopTimerRemovingAttribute:(BOOL)a0;
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(BOOL)a0;
- (void)updateMentionAttributes:(id)a0;
- (void)updateMentionDisplay;

@end
