@class NSArray, NSData, NSMutableArray;

@interface MPSGraphVariable : NSObject <NSCopying> {
    NSData *_data;
    NSMutableArray *_mpsndarrays;
}

@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long Value; } ownerAndKind; } value;

+ (id)newVariableWithData:(id)a0 shape:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)mpsNDArrayWithDevice:(id)a0;
- (id)initVariableWithData:(id)a0 value:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long x0; } x0; })a1;
- (id)initVariableWithData:(id)a0 shape:(id)a1;
- (id)initVariableWithMPSNDArray:(id)a0 value:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long x0; } x0; })a1;

@end
