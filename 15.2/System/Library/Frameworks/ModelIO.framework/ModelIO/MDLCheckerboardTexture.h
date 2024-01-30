@interface MDLCheckerboardTexture : MDLTexture {
    int _divisions;
    struct CGColor { } *_color1;
    struct CGColor { } *_color2;
}

@property (nonatomic) float divisions;
@property (nonatomic) struct CGColor { } *color1;
@property (nonatomic) struct CGColor { } *color2;

- (void)dealloc;
- (id)generateDataAtLevel:(long long)a0 selector:(SEL)a1;
- (id)initWithDivisions:(SEL)a0 name:(float)a1 dimensions:(id)a2 channelCount:(int)a3 channelEncoding:(long long)a4 color1:(struct CGColor { } *)a5 color2:(struct CGColor { } *)a6;

@end
