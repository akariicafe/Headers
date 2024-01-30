@class NSArray, MPSGraphVariable;

@interface MPSGraphVariableOp : MPSGraphOperation

@property (readonly, nonatomic) MPSGraphVariable *variable;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;

- (void).cxx_destruct;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;
- (id)mpsNDArrayWithDevice:(id)a0;
- (id)initWithGraph:(id)a0 shape:(id)a1 dataType:(unsigned int)a2 name:(id)a3;
- (id)initWithGraph:(id)a0 variableMPSNDArray:(id)a1 name:(id)a2;

@end
