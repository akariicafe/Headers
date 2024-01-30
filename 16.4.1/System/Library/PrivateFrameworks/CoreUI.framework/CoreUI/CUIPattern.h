@interface CUIPattern : NSObject {
    struct CGImage { } *_patternImage;
    struct CGPattern { } *_pattern;
}

@property (nonatomic) double alpha;

- (struct CGPattern { } *)pattern;
- (void)dealloc;
- (id)description;
- (struct CGImage { } *)patternImageRef;
- (struct CGPattern { } *)_newPattern;
- (id)initWithImageRef:(struct CGImage { } *)a0;
- (void)setPatternInContext:(struct CGContext { } *)a0;

@end
