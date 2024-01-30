@interface MTLGPUDebugLibrary : MTLToolsLibrary

- (id)newFunctionWithName:(id)a0;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (id)initWithLibrary:(id)a0 device:(id)a1;

@end
