@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying>

@property (nonatomic) BOOL scaled;
@property (retain, nonatomic) UIKBShape *originalShape;
@property (retain, nonatomic) UIKBGeometry *geometry;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paddedFrame;
@property (nonatomic) unsigned long long concaveCorner;
@property (nonatomic) struct CGSize { double width; double height; } concaveCornerOffset;
@property (readonly, nonatomic) unsigned long long uid;

+ (id)shape;
+ (id)shapeByResizingShape:(id)a0 byAmount:(struct CGSize { double x0; double x1; })a1;
+ (id)shapeByCombining:(id)a0 withShape:(id)a1;

- (void)setConcaveCornerSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEmpty;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addRectFrom:(id)a0 widthFraction:(double)a1 heightFraction:(double)a2 adjustOriginXFactor:(double)a3 adjustOriginYFactor:(double)a4;
- (void)makeLikeOther:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldUseGeometry;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)scaleIfNeeded:(double)a0 onlyYAxis:(BOOL)a1;
- (id)initWithGeometry:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 paddedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 concaveCorner:(unsigned long long)a3 concaveCornerOffset:(struct CGSize { double x0; double x1; })a4;
- (void)scaleWidth:(double)a0;
- (void)addRectFrom:(id)a0;
- (void)addRectFrom:(id)a0 widthFraction:(double)a1 heightFraction:(double)a2 adjustOriginXFactor:(double)a3 adjustOriginYFactor:(double)a4 absoluteOriginFactors:(BOOL)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inYAxis:(BOOL)a1;
- (void)addRectFrom:(id)a0 mergeActionFactors:(id)a1;
- (id)initWithGeometry:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 paddedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)encodeWithCoder:(id)a0;

@end
