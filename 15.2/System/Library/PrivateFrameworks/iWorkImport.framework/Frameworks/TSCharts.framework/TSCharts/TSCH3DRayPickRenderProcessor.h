@class TSCH3DDataBuffer, NSArray, TSCH3DRayPickPipelineDelegate, NSMutableArray;

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer *_buffer;
    NSMutableArray *_pickedPoints;
}

@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } position;
@property (nonatomic) float slack;
@property (retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate;
@property (readonly, nonatomic) NSArray *pickedPoints;

- (id)matrix;
- (void)submit:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)geometry:(id)a0;

@end
