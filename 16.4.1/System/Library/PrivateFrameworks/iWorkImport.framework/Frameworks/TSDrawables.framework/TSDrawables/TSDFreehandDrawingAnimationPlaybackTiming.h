@class NSArray, TSDFreehandDrawingInfo;

@interface TSDFreehandDrawingAnimationPlaybackTiming : NSObject {
    TSDFreehandDrawingInfo *_freehandDrawingInfo;
    NSArray *_fillShapes;
    NSArray *_strokeShapes;
}

- (void).cxx_destruct;
- (id)initWithFreehandDrawingInfo:(id)a0;
- (id)p_fillTimingCurve;
- (BOOL)shouldParameterizeStrokesWithDuration:(double)a0 framesPerSecond:(double)a1;
- (double)visibilityOfChild:(id)a0 atPercent:(double)a1;

@end
