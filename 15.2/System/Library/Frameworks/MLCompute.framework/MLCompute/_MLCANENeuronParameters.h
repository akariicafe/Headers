@class NSArray;

@interface _MLCANENeuronParameters : NSObject

@property (readonly, retain, nonatomic) NSArray *neuronParams;
@property (readonly, nonatomic) int type;

+ (id)neuronUnitParametersWith:(id)a0 neuronType:(int)a1;

- (void).cxx_destruct;
- (id)initWithNeuronParams:(id)a0 neuronType:(int)a1;

@end
