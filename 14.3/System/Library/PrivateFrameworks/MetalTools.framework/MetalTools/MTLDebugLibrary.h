@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary : MTLToolsLibrary

@property (nonatomic) unsigned long long debugType;
@property (copy, nonatomic) id code;
@property (copy, nonatomic) MTLCompileOptions *compileOptions;
@property (readonly, nonatomic) NSArray *imageFilterFunctions;
@property (readonly, nonatomic) struct { BOOL x0; unsigned long long x1; struct *x2; } *imageFilterFunctionInfo;

- (id)newFunctionWithName:(id)a0;
- (void)newIntersectionFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)newFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newIntersectionFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (void)newFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (id)initWithLibrary:(id)a0 parent:(id)a1 type:(unsigned long long)a2 code:(id)a3 options:(id)a4;
- (void)setImageFilterFunctions:(id)a0 imageFilterFunctionInfo:(const struct { BOOL x0; unsigned long long x1; struct *x2; } *)a1;
- (void)validateDescriptor:(id)a0 expectedClass:(Class)a1;
- (id)copyConstantValues:(id)a0;

@end
