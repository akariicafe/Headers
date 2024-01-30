@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol>

@property (readonly) unsigned long long optimizerType;
@property (readonly) float learningRate;
@property (readonly) float momentum;
@property (readonly) NSNumber *gradientClipMin;
@property (readonly) NSNumber *gradientClipMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
