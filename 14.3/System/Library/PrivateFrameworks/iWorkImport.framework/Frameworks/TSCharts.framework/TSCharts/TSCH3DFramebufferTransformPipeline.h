@class TSCH3DFramebuffer;
@protocol TSCH3DPipelineLinkable;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {
    TSCH3DFramebuffer *mInput;
}

@property (retain, nonatomic) id<TSCH3DPipelineLinkable> source;
@property (retain, nonatomic) TSCH3DFramebuffer *target;

- (BOOL)run;
- (void)dealloc;
- (void)loadSource;
- (BOOL)prepareFramebuffer;

@end
