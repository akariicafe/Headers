@class MPSGraphCompilationDescriptor;

@interface MPSGraphExecutableDescriptor : NSObject

@property unsigned long long compilerOptions;
@property (copy) id /* block */ variableFetchHandler;
@property (retain) MPSGraphCompilationDescriptor *compilationDescriptor;

- (id)init;
- (void).cxx_destruct;

@end
