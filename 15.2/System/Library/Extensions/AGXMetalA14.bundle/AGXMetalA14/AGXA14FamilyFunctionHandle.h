@class AGXA14FamilyDynamicLibrary;

@interface AGXA14FamilyFunctionHandle : _MTLFunctionHandle {
    struct FunctionHandle { unsigned long long function_type; unsigned long long value; } _impl;
    AGXA14FamilyDynamicLibrary *_binary_dylib;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFunctionType:(unsigned long long)a0 name:(id)a1 device:(id)a2 handle:(unsigned long long)a3 dylib:(id)a4;

@end
