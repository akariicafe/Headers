@class NSObject;
@protocol OS_dispatch_queue;

@interface MPSGraphCompilationDescriptor : NSObject <NSCopying>

@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property BOOL compileANEInMemory;
@property BOOL printANEPlacementAnalysis;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) unsigned long long optimizationProfile;
@property (nonatomic) BOOL waitForCompilationCompletion;
@property (copy) id /* block */ compilationCompletionHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (BOOL)isEqualTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)disableTypeInference;
- (void)enableDevicePlacement;
- (void)enableFileBackedConstants;
- (struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; struct NamedAttribute *x1; struct __compressed_pair<mlir::NamedAttribute *, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; } x2; })getNamedAttrArray:(void *)a0 device:(id)a1;

@end
