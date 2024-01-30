@interface MPSCNNNeuronNode : MPSNNFilterNode {
    int _type;
}

@property (readonly, nonatomic) float a;
@property (readonly, nonatomic) float b;
@property (readonly, nonatomic) float c;

+ (id)nodeWithSource:(id)a0 descriptor:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)descriptor;
- (id)debugDescription;
- (void *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 type:(int)a1 a:(float)a2 b:(float)a3 c:(float)a4;

@end
