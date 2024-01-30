@class AGXA11FamilyDynamicLibrary;

@interface AGXA11FamilyFunctionHandle : _MTLFunctionHandle {
    struct FunctionHandleNop { } _impl;
    AGXA11FamilyDynamicLibrary *_binary_dylib;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithFunctionType:(unsigned long long)a0 name:(id)a1 device:(id)a2 handle:(unsigned long long)a3 dylib:(id)a4;

@end
