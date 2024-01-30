@interface MPSGraphResizeBaseOp : MPSGraphOperation {
    unsigned long long _mode;
    unsigned long long _nearestRoundingMode;
    BOOL _centerResult;
    BOOL _alignCorners;
    unsigned long long _layout;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 mode:(unsigned long long)a3 nearestRoundingMode:(unsigned long long)a4 centerResult:(BOOL)a5 alignCorners:(BOOL)a6 layout:(unsigned long long)a7 name:(id)a8;

@end
