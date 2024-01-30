@class NSArray, TSDFreehandDrawingInfo;

@interface TSDFreehandDrawingAnimationPlaybackTiming : NSObject {
    TSDFreehandDrawingInfo *_freehandDrawingInfo;
    NSArray *_fillShapes;
    NSArray *_strokeShapes;
}

- (void).cxx_destruct;
- (id)initWithFreehandDrawingInfo:(id)a0;
- (double)visibilityOfChild:(id)a0 atPercent:(double)a1;
- (BOOL)shouldParameterizeStrokesWithDuration:(double)a0 framesPerSecond:(double)a1;
- (id)p_fillTimingCurve;

@end
