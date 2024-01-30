@class NSDictionary;

@interface _MLCANEConvolutionParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *convolutionParams;
@property (readonly, retain, nonatomic) NSDictionary *biasParams;
@property (readonly, retain, nonatomic) NSDictionary *neuronParams;

+ (id)convolutionUnitParametersWith:(id)a0 biasParams:(id)a1 neuronParams:(id)a2;

- (void).cxx_destruct;
- (id)initWithConvolutionParams:(id)a0 biasParams:(id)a1 neuronParams:(id)a2;

@end
