@class NSSet, NSMutableArray, NSObject;
@protocol MTLLibrary, OS_dispatch_data;

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> *_data;
    id<MTLLibrary> _library;
    NSSet *_extern_function_names;
    NSMutableArray *_stitchable_function_names;
}

@property (readonly) unsigned long long functionCount;

+ (id)libraryWithData:(id)a0 error:(id *)a1;
+ (id)internalLibraryWithName:(id)a0 device:(id)a1;
+ (id)coreImageDylibWithDevice:(id)a0;
+ (id)libraryWithSource:(id)a0 error:(id *)a1;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)initFunctionNames;
- (id)initWithSource:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)newMTLLibraryWithSource:(id)a0 source:(id)a1 error:(id *)a2;
- (id)newSpecializedFunctionWithName:(id)a0 constants:(void *)a1;
- (id)newMTLLibraryWithData:(id)a0 data:(id)a1 error:(id *)a2;
- (id)newFunctionWithName:(id)a0;
- (id)functionNames;
- (id)functionWithName:(id)a0;

@end
