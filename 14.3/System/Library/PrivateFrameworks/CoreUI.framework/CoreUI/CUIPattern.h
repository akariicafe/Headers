@interface CUIPattern : NSObject {
    struct CGImage { } *_patternImage;
    struct CGPattern { } *_pattern;
}

@property (nonatomic) double alpha;

- (struct CGPattern { } *)_newPattern;
- (id)initWithImageRef:(struct CGImage { } *)a0;
- (void)setPatternInContext:(struct CGContext { } *)a0;
- (struct CGImage { } *)patternImageRef;
- (void)dealloc;
- (id)description;
- (struct CGPattern { } *)pattern;

@end
