@class NSDictionary, NSArray;

@interface _MLCANEConvolutionParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *convolutionParams;
@property (readonly, retain, nonatomic) NSDictionary *biasParams;
@property (readonly, retain, nonatomic) NSArray *neuronParams;

+ (id)convolutionUnitParametersWith:(id)a0 biasParams:(id)a1 neuronParams:(id)a2;

- (void).cxx_destruct;
- (id)initWithConvolutionParams:(id)a0 biasParams:(id)a1 neuronParams:(id)a2;

@end
