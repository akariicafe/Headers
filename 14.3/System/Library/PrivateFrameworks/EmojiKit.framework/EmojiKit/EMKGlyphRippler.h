@class NSArray;

@interface EMKGlyphRippler : NSObject {
    NSArray *_colors;
    NSArray *_darkModeColors;
    NSArray *_shadowColors;
    NSArray *_darkModeShadowColors;
    NSArray *_scales;
    NSArray *_offsets;
    double _startTime;
    unsigned long long _preFrames;
    unsigned long long _animateFrames;
    unsigned long long _postFrames;
    unsigned long long _delayFrames;
    BOOL _reduceMotion;
    BOOL _darkMode;
}

- (id)init;
- (void).cxx_destruct;
- (void)generateValues;
- (unsigned long long)currentIndexForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2 isFinished:(BOOL *)a3;
- (unsigned long long)currentTimeIndex;
- (id)currentColorForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (double)currentScaleForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (id)currentShadowColorForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (BOOL)finishedForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })currentOffsetForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (void)start;
- (void)startWithDarkMode:(BOOL)a0;
- (void)setPreFrames:(unsigned long long)a0;
- (void)setPostFrames:(unsigned long long)a0;
- (void)setDelayFrames:(unsigned long long)a0;

@end
