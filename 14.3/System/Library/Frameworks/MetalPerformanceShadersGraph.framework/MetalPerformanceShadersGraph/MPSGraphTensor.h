@class NSString, NSArray, MPSGraphOperation;

@interface MPSGraphTensor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long Value; } ownerAndKind; } value;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, weak, nonatomic) MPSGraphOperation *operation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)debugDescription;
- (id)initTensorWithOperation:(id)a0 value:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long x0; } x0; })a1 name:(id)a2;
- (id)initTensorWithValue:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long x0; } x0; })a0;
- (id)initTensorWithOperation:(id)a0 value:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long x0; } x0; })a1;

@end
