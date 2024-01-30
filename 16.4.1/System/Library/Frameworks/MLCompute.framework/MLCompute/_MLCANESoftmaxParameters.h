@class NSDictionary;

@interface _MLCANESoftmaxParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *softmaxParams;
@property (readonly, retain, nonatomic) NSDictionary *neuronParams;
@property (readonly, retain, nonatomic) NSDictionary *gocParams;

+ (id)softmaxUnitParametersWith:(id)a0 neuronParams:(id)a1 gocParams:(id)a2;

- (void).cxx_destruct;
- (id)initWithSoftmaxParams:(id)a0 neuronParams:(id)a1 gocParams:(id)a2;

@end
