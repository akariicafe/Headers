@interface ISSymbolImage : ISImage {
    struct CGImage { } *_internalCGImage;
    double _internalScale;
    struct CGSize { double width; double height; } _internalSize;
}

@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned long long symbolSize;
@property (readonly, nonatomic) long long symbolWeight;
@property (readonly, nonatomic) double referencePointSize;
@property (readonly, nonatomic) double fontMatchingScaleFactor;
@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) double capHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alignmentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (readonly, nonatomic, getter=isFlippable) BOOL flippable;

- (struct CGImage { } *)cgImage;
- (BOOL)placeholder;
- (double)scale;
- (id)initWithNamedVectorGlyph:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;

@end
