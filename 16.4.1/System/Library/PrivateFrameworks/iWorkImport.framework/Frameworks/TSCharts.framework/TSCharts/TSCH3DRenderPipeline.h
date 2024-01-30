@class TSCH3DContext, TSCH3DSession, TSCH3DRenderProcessor;

@interface TSCH3DRenderPipeline : NSObject

@property (retain, nonatomic) TSCH3DRenderProcessor *processor;
@property (readonly, nonatomic) TSCH3DSession *session;
@property (readonly, nonatomic) TSCH3DContext *context;

+ (id)clipRectForTargetSize:(const void *)a0 intermediateSize:(const void *)a1;
+ (id)pipelineWithProcessor:(id)a0 session:(id)a1;

- (void).cxx_destruct;
- (id)initWithProcessor:(id)a0 session:(id)a1;

@end
