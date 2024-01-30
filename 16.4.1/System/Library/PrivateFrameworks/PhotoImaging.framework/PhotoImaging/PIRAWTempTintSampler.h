@class NSString;

@interface PIRAWTempTintSampler : NUTagColorSampler <PITagColorSampler>

@property (readonly, nonatomic) NSString *tag;

- (id)_pipelineFilters;
- (id)initWithComposition:(id)a0 responseQueue:(id)a1;

@end
