@class NSArray, NSString, NSMutableArray;

@interface MDLMaterialPropertyNode : NSObject <MDLNamed> {
    NSMutableArray *_inputNodes;
}

@property (copy, nonatomic) id /* block */ evaluationFunction;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithInputs:(id)a0 outputs:(id)a1 evaluationFunction:(id /* block */)a2;

@end
