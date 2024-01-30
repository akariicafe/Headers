@class TSCH3DContext, TSCH3DSession, TSCH3DRenderProcessor;

@interface TSCH3DRenderPipeline : NSObject

@property (retain, nonatomic) TSCH3DRenderProcessor *processor;
@property (readonly, nonatomic) TSCH3DSession *session;
@property (readonly, nonatomic) TSCH3DContext *context;

+ (id)clipRectForTargetSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 intermediateSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
+ (id)pipelineWithProcessor:(id)a0 session:(id)a1;

- (void)dealloc;
- (id)initWithProcessor:(id)a0 session:(id)a1;

@end
