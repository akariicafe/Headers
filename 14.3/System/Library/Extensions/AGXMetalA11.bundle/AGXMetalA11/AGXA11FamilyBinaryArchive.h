@class NSArray, NSString;
@protocol MTLDevice;

@interface AGXA11FamilyBinaryArchive : _MTLBinaryArchive <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addFunction:(id)a0 withDescriptor:(id)a1 error:(id *)a2;

@end
