@class NSString, NSArray;
@protocol MTLDevice, MTLPipelineCache;

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property BOOL disableRunTimeCompilation;
@property (readonly, nonatomic) id<MTLPipelineCache> pipelineCache;
@property (readonly, nonatomic) id<MTLPipelineCache> functionCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
