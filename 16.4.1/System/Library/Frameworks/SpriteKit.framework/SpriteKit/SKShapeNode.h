@class UIColor, SKTexture, NSDictionary, SKShader;

@interface SKShapeNode : SKNode {
    void *_skcShapeNode;
}

@property (nonatomic) double renderQualityRatio;
@property (nonatomic) const struct CGPath { } *path;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) long long blendMode;
@property (nonatomic, getter=isAntialiased) BOOL antialiased;
@property (nonatomic) double lineWidth;
@property (nonatomic) double glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) double miterLimit;
@property (readonly, nonatomic) double lineLength;
@property (retain, nonatomic) SKTexture *fillTexture;
@property (retain, nonatomic) SKShader *fillShader;
@property (retain, nonatomic) SKTexture *strokeTexture;
@property (retain, nonatomic) SKShader *strokeShader;
@property (copy, nonatomic) NSDictionary *attributeValues;

+ (BOOL)supportsSecureCoding;
+ (id)shapeNodeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)shapeNodeWithCircleOfRadius:(double)a0;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize { double x0; double x1; })a0;
+ (id)shapeNodeWithPath:(struct CGPath { } *)a0;
+ (id)shapeNodeWithPath:(struct CGPath { } *)a0 centered:(BOOL)a1;
+ (id)shapeNodeWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)shapeNodeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)shapeNodeWithRectOfSize:(struct CGSize { double x0; double x1; })a0;
+ (id)shapeNodeWithRectOfSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)shapeNodeWithTriangleA:(struct CGPoint { double x0; double x1; })a0 B:(struct CGPoint { double x0; double x1; })a1 C:(struct CGPoint { double x0; double x1; })a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEqualToNode:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (id)valueForAttributeNamed:(id)a0;

@end
