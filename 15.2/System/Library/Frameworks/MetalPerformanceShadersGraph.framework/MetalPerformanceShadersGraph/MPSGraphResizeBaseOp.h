@interface MPSGraphResizeBaseOp : MPSGraphOperation {
    unsigned long long _mode;
    BOOL _centerResult;
    BOOL _alignCorners;
    unsigned long long _layout;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 mode:(unsigned long long)a3 centerResult:(BOOL)a4 alignCorners:(BOOL)a5 layout:(unsigned long long)a6 name:(id)a7;

@end
