@class NSString, NSArray, MPSGraphOperation, MPSGraph, MPSGraphBlock;

@interface MPSGraphTensor : NSObject <NSCopying> {
    MPSGraph *_graph;
    MPSGraphBlock *_parentBlock;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct Value { struct ValueImpl *impl; } value;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, weak, nonatomic) MPSGraphOperation *operation;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initTensorWithOperation:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1 graph:(id)a2;
- (id)initTensorWithOperation:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1 graph:(id)a2 name:(id)a3;
- (id)initTensorWithOperation:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1 graph:(id)a2 parentBlock:(id)a3 name:(id)a4;
- (id)initTensorWithValue:(struct Value { struct ValueImpl *x0; })a0 graph:(id)a1;

@end
