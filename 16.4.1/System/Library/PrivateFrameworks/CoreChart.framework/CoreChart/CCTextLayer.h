@class NSArray;

@interface CCTextLayer : CALayer {
    NSArray *_lineContents;
}

@property (retain, nonatomic) id font;
@property (retain, nonatomic) id fillColor;
@property (retain, nonatomic) id strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) NSArray *lines;
@property (nonatomic) double lineHeight;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } combinedCTMHint;
@property (nonatomic) int align;
@property (nonatomic) int baseline;
@property (nonatomic) struct CGPoint { double x; double y; } textPosition;
@property (nonatomic) double textAngle;

+ (id)layer;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)renderInContext:(struct CGContext { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateTextContents;

@end
