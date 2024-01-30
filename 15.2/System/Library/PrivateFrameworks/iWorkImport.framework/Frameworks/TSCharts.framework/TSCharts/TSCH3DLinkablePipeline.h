@class NSString;

@interface TSCH3DLinkablePipeline : TSCH3DRenderPipeline <TSCH3DPipelineLinkable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)output;

@end
