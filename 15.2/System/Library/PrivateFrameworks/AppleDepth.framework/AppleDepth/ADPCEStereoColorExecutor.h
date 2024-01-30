@class ADPCEStereoColorExecutorParameters;

@interface ADPCEStereoColorExecutor : ADPCEDisparityColorExecutor

@property (copy, nonatomic) ADPCEStereoColorExecutorParameters *executorParameters;

- (id)initForInputSource:(unsigned long long)a0;

@end
