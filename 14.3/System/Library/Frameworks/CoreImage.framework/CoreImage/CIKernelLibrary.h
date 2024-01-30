@class NSObject;
@protocol MTLLibrary, OS_dispatch_data;

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> *_data;
    id<MTLLibrary> _library;
}

@property (readonly) unsigned long long functionCount;

+ (id)internalLibraryWithName:(id)a0 device:(id)a1;
+ (id)libraryWithData:(id)a0 error:(id *)a1;

- (id)externFunctionNames;
- (void)dealloc;
- (id)newFunctionWithName:(id)a0 device:(id)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)functionWithName:(id)a0;

@end
