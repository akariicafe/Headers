@interface MPSGraphResizeBaseOp : MPSGraphOperation {
    unsigned long long _mode;
    BOOL _centerResult;
    BOOL _alignCorners;
    unsigned long long _layout;
    struct MLIRContext { struct unique_ptr<mlir::MLIRContextImpl, std::__1::default_delete<mlir::MLIRContextImpl> > { struct __compressed_pair<mlir::MLIRContextImpl *, std::__1::default_delete<mlir::MLIRContextImpl> > { struct MLIRContextImpl *x0; } x0; } x0; } *_context;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 mode:(unsigned long long)a3 centerResult:(BOOL)a4 alignCorners:(BOOL)a5 layout:(unsigned long long)a6 name:(id)a7 context:(struct MLIRContext { struct unique_ptr<mlir::MLIRContextImpl, std::__1::default_delete<mlir::MLIRContextImpl> > { struct __compressed_pair<mlir::MLIRContextImpl *, std::__1::default_delete<mlir::MLIRContextImpl> > { struct MLIRContextImpl *x0; } x0; } x0; } *)a8;

@end
