@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    struct CGSize { double width; double height; } mNaturalSize;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } minPointValue;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } maxPointValue;
@property (readonly, nonatomic) unsigned long long starPoints;
@property (readonly, nonatomic) unsigned long long maxStarPoints;
@property (readonly, nonatomic) unsigned long long minStarPoints;
@property (readonly, nonatomic) double starRadius;
@property (readonly, nonatomic) double maxStarRadius;
@property (readonly, nonatomic) double minStarRadius;
@property (readonly, nonatomic) double arrowHead;
@property (readonly, nonatomic) double maxArrowHead;
@property (readonly, nonatomic) double minArrowHead;
@property (readonly, nonatomic) double arrowIndent;
@property (readonly, nonatomic) double maxArrowIndent;
@property (readonly, nonatomic) double minArrowIndent;

+ (id)rightSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)doubleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)starWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)plusWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0;
- (BOOL)isRectangular;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithType:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForArrow;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarPoints;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForArrow:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForPlus:(struct CGPoint { double x0; double x1; })a0;
- (const struct CGPath { } *)p_newArrowPath;
- (const struct CGPath { } *)p_newStarPath;
- (const struct CGPath { } *)p_newPlusPath;
- (BOOL)p_isRightFacingArrow;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (BOOL)p_isFlippedDoubleArrow;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)p_isArrowType;
- (id)inferredAccessibilityDescription;

@end
