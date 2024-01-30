@class NSMutableDictionary;

@interface _UISegmentedControlAppearanceStorage : NSObject {
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    unsigned long long _leftCapWidth;
    unsigned long long _rightCapWidth;
}

- (void)setDividerImage:(id)a0 forLeftSegmentState:(unsigned long long)a1 rightSegmentState:(unsigned long long)a2 isMini:(BOOL)a3;
- (id)backgroundImageForState:(unsigned long long)a0 isMini:(BOOL)a1;
- (void)setDetail:(struct { id x0; double x1; double x2; struct { id x0; id x1; id x2; id x3; id x4; struct CGSize { double x0; double x1; } x5; } x3; struct { id x0; id x1; id x2; id x3; id x4; struct CGSize { double x0; double x1; } x5; } x4; struct { id x0; id x1; id x2; id x3; id x4; struct CGSize { double x0; double x1; } x5; } x5; struct { id x0; id x1; id x2; id x3; id x4; struct CGSize { double x0; double x1; } x5; } x6; BOOL x7; } *)a0;
- (void)setContentPositionOffset:(id)a0 forSegment:(long long)a1 inMiniBar:(BOOL)a2;
- (void)takeTextAttributesFrom:(struct { id x0; id x1; id x2; id x3; id x4; struct CGSize { double x0; double x1; } x5; })a0 forState:(unsigned long long)a1;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 isMini:(BOOL)a2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)a0 rightSegmentState:(unsigned long long)a1 isMini:(BOOL)a2;
- (BOOL)legacySuppressOptionsBackground;
- (void).cxx_destruct;
- (id)anyDividerImage;
- (id)init;
- (id)textAttributesForState:(unsigned long long)a0;
- (void)setBackgroundPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)a0 rightSegmentState:(unsigned long long)a1 isMini:(BOOL)a2 withFallback:(BOOL)a3;
- (void)setIsTiled:(BOOL)a0 leftCapWidth:(unsigned long long)a1 rightCapWidth:(unsigned long long)a2;
- (BOOL)wantsTrackingSuppressed;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)a0;
- (void)setTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)contentPositionOffsetForSegment:(long long)a0 inMiniBar:(BOOL)a1;
- (id)contentPositionOffsetForSegment:(long long)a0 inMiniBar:(BOOL)a1 noFallback:(BOOL)a2;
- (id)anyDividerImageForMini:(BOOL)a0;
- (id)backgroundImageForState:(unsigned long long)a0 isMini:(BOOL)a1 withFallback:(BOOL)a2;

@end
