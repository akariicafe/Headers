@class CVNLPCaptionRuntimeParameters;

@interface CVNLPCaptionModelBase : CVNLPModelBase

@property (readonly, nonatomic) CVNLPCaptionRuntimeParameters *runTimeParams;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 runTimeParams:(id)a1;

@end
