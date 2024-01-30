@interface AGXA11FamilyFunctionHandle : _MTLFunctionHandle {
    struct FunctionHandleNop { } _impl;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFunctionType:(unsigned long long)a0 name:(id)a1 device:(id)a2 handle:(unsigned long long)a3;

@end
