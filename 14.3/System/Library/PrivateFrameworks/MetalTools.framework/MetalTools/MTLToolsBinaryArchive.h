@class NSArray, NSString;
@protocol MTLDevice;

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (id)getBinaryDataForKey:(id)a0;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (void)addBinaryEntry:(id)a0 forKey:(id)a1;

@end
