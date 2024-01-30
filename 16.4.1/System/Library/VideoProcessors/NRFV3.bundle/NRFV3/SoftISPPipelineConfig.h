@class SoftISPGraph, NSDictionary;

@interface SoftISPPipelineConfig : SoftISPConfig

@property (readonly, nonatomic) SoftISPGraph *graph;
@property (readonly, nonatomic) NSDictionary *configForStages;

- (void).cxx_destruct;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputCompressionLevel:(int)a2 graph:(id)a3;

@end
