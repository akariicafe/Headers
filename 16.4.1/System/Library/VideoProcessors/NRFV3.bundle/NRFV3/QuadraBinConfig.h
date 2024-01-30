@class SoftISPConfig;
@protocol SoftISPStage;

@interface QuadraBinConfig : SoftISPConfig

@property (readonly, nonatomic) id<SoftISPStage> downstreamStage;
@property (readonly, nonatomic) SoftISPConfig *downstreamConfig;

- (void).cxx_destruct;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputCompressionLevel:(int)a2 downstreamStage:(id)a3;

@end
