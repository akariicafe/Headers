@interface MPSGraphCompilationDescriptor : NSObject

@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property BOOL compileANEInMemory;

- (id)init;
- (void)disableTypeInference;
- (void)enableFileBackedConstants;

@end
