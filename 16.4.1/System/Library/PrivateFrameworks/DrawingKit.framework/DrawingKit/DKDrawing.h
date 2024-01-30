@class NSMutableArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } canvasBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strokesFrame;
@property (retain, nonatomic) NSMutableArray *strokes;
@property (readonly, nonatomic) long long totalPoints;

+ (id)copyOfDrawing:(id)a0 toFitInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)resizeDrawing:(id)a0 toFitInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addBrushStroke:(id)a0;
- (id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)a0;
- (id)encodeBrushStrokesForArchiving;
- (id)mutableStrokes;
- (void)removeLastBrushStroke;

@end
