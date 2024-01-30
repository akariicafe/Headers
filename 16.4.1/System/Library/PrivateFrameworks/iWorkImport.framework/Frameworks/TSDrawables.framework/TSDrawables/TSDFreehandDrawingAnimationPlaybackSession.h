@class NSString, TSDFreehandDrawingAnimationPlaybackTiming, TSDFreehandDrawingInfo;

@interface TSDFreehandDrawingAnimationPlaybackSession : NSObject <TSDDynamicOverrideProvider> {
    TSDFreehandDrawingInfo *_drawingInfo;
    TSDFreehandDrawingAnimationPlaybackTiming *_timing;
    double _framesPerSecond;
}

@property (nonatomic) double duration;
@property (nonatomic) double progress;
@property (readonly, nonatomic) BOOL shouldParameterizeStrokes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dynamicOverrideForLayout:(id)a0;
- (id)dynamicOverrideForRep:(id)a0;
- (id)initWithFreehandDrawingInfo:(id)a0 duration:(double)a1 framesPerSecond:(double)a2;
- (void)p_updateShouldParameterizeStrokes;
- (double)visibilityOfChild:(id)a0;

@end
