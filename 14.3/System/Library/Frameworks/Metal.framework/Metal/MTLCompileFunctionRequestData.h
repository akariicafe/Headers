@class NSArray, NSDictionary, NSObject, MTLFunction;
@protocol MTLBinaryArchive, OS_dispatch_data, MTLPipelineCache;

@interface MTLCompileFunctionRequestData : NSObject {
    NSObject<OS_dispatch_data> *_frameworkData;
    NSObject<OS_dispatch_data> *_driverKeyData;
}

@property (nonatomic) BOOL sync;
@property (nonatomic) unsigned long long pipelineOptions;
@property (retain, nonatomic) MTLFunction *function;
@property (nonatomic) NSObject<OS_dispatch_data> *frameworkData;
@property (nonatomic) NSObject<OS_dispatch_data> *driverKeyData;
@property (retain, nonatomic) id<MTLPipelineCache> pipelineCache;
@property (retain, nonatomic) id<MTLBinaryArchive> destinationBinaryArchive;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) NSArray *visibleFunctions;
@property (copy, nonatomic) NSArray *privateVisibleFunctions;
@property (copy, nonatomic) NSDictionary *visibleFunctionGroups;

- (void)dealloc;

@end
