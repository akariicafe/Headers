@class NSArray, NSData;

@interface MPSGraphConstantOp : MPSGraphOperation {
    NSData *_data;
}

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;

- (void).cxx_destruct;
- (struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > { long long x0; } x0; })makeMLIROpWithBuilder:(struct OpBuilder { struct MLIRContext *x0; struct Block *x1; struct ilist_iterator<llvm::ilist_detail::node_options<mlir::Operation, false, false, void>, false, false> { struct ilist_node_impl<llvm::ilist_detail::node_options<mlir::Operation, false, false, void> > *x0; } x2; struct Listener *x3; } *)a0 symbolTable:(struct MPSSymbolTable { struct StringMap<std::__1::basic_string<char>, llvm::MallocAllocator> { struct StringMapEntryBase **x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct MallocAllocator { } x5; } x0; } *)a1 inputValues:(struct vector<mlir::Value, std::__1::allocator<mlir::Value> > { struct Value *x0; struct Value *x1; struct __compressed_pair<mlir::Value *, std::__1::allocator<mlir::Value> > { struct Value *x0; } x2; } *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 data:(id)a1 shape:(id)a2 dataType:(unsigned int)a3 name:(id)a4;

@end
