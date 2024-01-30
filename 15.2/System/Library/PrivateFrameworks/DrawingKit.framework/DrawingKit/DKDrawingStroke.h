@class NSMutableArray;

@interface DKDrawingStroke : NSObject <NSCopying>

@property (readonly) NSMutableArray *strokePoints;

+ (id)drawingStrokeWithData:(id)a0 count:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedBrushStroke;
- (id)_encodePointsDrawingPointData:(id)a0;
- (id)_decodeDKEncodedDrawingPointDataAsArray:(id)a0 count:(long long)a1;

@end
