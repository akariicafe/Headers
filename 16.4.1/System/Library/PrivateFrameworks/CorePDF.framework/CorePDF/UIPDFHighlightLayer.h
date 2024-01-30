@interface UIPDFHighlightLayer : CALayer {
    struct CGPath { } *_clipPath;
    struct CGPath { } *_borderPath;
}

@property (nonatomic) struct CGPath { } *clipPath;
@property (nonatomic) struct CGPath { } *borderPath;
@property (nonatomic) struct CGPoint { double x; double y; } offset;

- (void)dealloc;
- (struct CGPath { } *)borderPath;
- (struct CGPath { } *)clipPath;
- (void)setBorderPath:(struct CGPath { } *)a0;
- (void)setClipPath:(struct CGPath { } *)a0;

@end
