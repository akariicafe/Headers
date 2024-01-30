@class NSString, NSArray;
@protocol MTLDevice;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>

@property (copy) NSString *overrideTriple;
@property (readonly) NSArray *externFunctionNames;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray *functionNames;
@property (readonly) long long type;
@property (readonly) NSString *installName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newExternFunctionWithName:(id)a0;
- (id)newFunctionWithName:(id)a0;
- (void)newIntersectionFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newIntersectionFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (void)newFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 completionHandler:(id /* block */)a3;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;

@end
