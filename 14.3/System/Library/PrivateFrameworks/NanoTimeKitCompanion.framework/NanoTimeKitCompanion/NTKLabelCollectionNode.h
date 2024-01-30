@interface NTKLabelCollectionNode : NTKCollectionNode

@property (nonatomic) long long faceStyle;
@property (nonatomic) unsigned int labels;
@property (nonatomic) unsigned int start;
@property (nonatomic) unsigned int multiple;
@property (nonatomic) unsigned int repeat;
@property (nonatomic) long long font;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL paddedWithZeros;
@property (nonatomic) double color;
@property (nonatomic) const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *positions;

+ (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *)a0 toNodes:(id)a1 forDevice:(id)a2;
+ (void)applyLabelPosition:(const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *)a0 withCenter:(struct CGPoint { double x0; double x1; })a1 toNode:(id)a2 forDevice:(id)a3;
+ (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *)a0 withCenter:(struct CGPoint { double x0; double x1; })a1 toNodes:(id)a2 forDevice:(id)a3;
+ (void)applyLabelPosition:(const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *)a0 toNode:(id)a1 forDevice:(id)a2;

- (id)initForDevice:(id)a0;
- (void)updateLabelNodePositions;
- (void)createSubNodes;
- (void)applyAppearanceFraction:(double)a0 inverted:(BOOL)a1;
- (void)colorize:(id)a0;

@end
