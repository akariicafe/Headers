@class TSCH3DDataBuffer, NSArray, TSCH3DRayPickPipelineDelegate, NSMutableArray;

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer *mBuffer;
    NSMutableArray *mPickedPoints;
}

@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } position;
@property (nonatomic) float slack;
@property (retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate;
@property (readonly, nonatomic) NSArray *pickedPoints;

- (id)matrix;
- (id)init;
- (void)submit:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)geometry:(id)a0;

@end
