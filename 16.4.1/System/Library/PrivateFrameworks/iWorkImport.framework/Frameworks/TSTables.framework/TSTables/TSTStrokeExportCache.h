@class TSDStroke, TSTStrokeLayerMergedStack;

@interface TSTStrokeExportCache : NSObject

@property (retain, nonatomic) TSTStrokeLayerMergedStack *mergedStrokes;
@property (nonatomic) struct TSTSimpleRange { long long origin; unsigned long long length; } range;
@property (retain, nonatomic) TSDStroke *stroke;

- (void).cxx_destruct;
- (id)strokeAtIndex:(unsigned int)a0;
- (id)initWithMergedStack:(id)a0;

@end
