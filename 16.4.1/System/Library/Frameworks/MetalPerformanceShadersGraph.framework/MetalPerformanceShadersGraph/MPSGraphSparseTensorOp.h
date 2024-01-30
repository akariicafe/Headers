@class NSArray;

@interface MPSGraphSparseTensorOp : MPSGraphOperation

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) unsigned long long sparseStorageType;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 sparseStorageType:(unsigned long long)a1 inputTensors:(id)a2 shape:(id)a3 dataType:(unsigned int)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
