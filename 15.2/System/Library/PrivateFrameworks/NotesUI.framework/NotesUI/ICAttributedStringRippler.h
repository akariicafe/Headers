@class UIColor, NSArray, UIFont, NSAttributedString;

@interface ICAttributedStringRippler : NSObject

@property (class, readonly) double refreshInterval;
@property (class, readonly) unsigned long long framesPerSecond;

@property (copy, nonatomic) NSAttributedString *string;
@property (retain, nonatomic) UIColor *endColor;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *shadowColors;
@property (copy, nonatomic) NSArray *scales;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long preFrames;
@property (nonatomic) unsigned long long animateFrames;
@property (nonatomic) unsigned long long postFrames;
@property (nonatomic) unsigned long long delayFrames;
@property (nonatomic) BOOL reduceMotion;
@property (retain, nonatomic) UIFont *initialFont;
@property (nonatomic) double initialFontSize;
@property (readonly, nonatomic) unsigned long long currentTimeIndex;
@property (readonly, nonatomic) unsigned long long finishedTimeIndex;

+ (BOOL)canAnimateString:(id)a0;

- (void)start;
- (void).cxx_destruct;
- (void)generateValues;
- (unsigned long long)currentIndexForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2 isFinished:(BOOL *)a3;
- (id)currentColorForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (id)currentShadowColorForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (double)currentScaleForGlyphIndex:(unsigned long long)a0 numberOfGlyphs:(unsigned long long)a1 timeIndex:(unsigned long long)a2;
- (id)initWithAttributedString:(id)a0 endColor:(id)a1;
- (id)attributedStringForTimeIndex:(unsigned long long)a0;
- (BOOL)finishedForTimeIndex:(unsigned long long)a0;

@end
