@interface DRSSamplingParameters : NSObject <DRJSONRepresentable>

@property (readonly, nonatomic) double samplingPercentage;

- (BOOL)isEqual:(id)a0;
- (id)jsonDictRepresentation;
- (BOOL)isEqualToSamplingParameters:(id)a0;
- (id)initWithSamplingPercentage:(double)a0;
- (id)initWithJSONDict:(id)a0;

@end
