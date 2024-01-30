@class NSDictionary;

@interface _MLCANENormalizationParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *normalizationParams;
@property (readonly, retain, nonatomic) NSDictionary *neuronParams;

+ (id)normalizationUnitParametersWith:(id)a0 neuronParams:(id)a1;

- (void).cxx_destruct;
- (id)initWithNormalizationParams:(id)a0 neuronParams:(id)a1;

@end
