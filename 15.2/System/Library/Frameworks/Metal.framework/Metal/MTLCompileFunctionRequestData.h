@class NSArray, NSDictionary, NSObject, MTLFunction;
@protocol MTLBinaryArchive, OS_dispatch_data, MTLPipelineCache;

@interface MTLCompileFunctionRequestData : NSObject {
    NSObject<OS_dispatch_data> *_frameworkData;
    NSObject<OS_dispatch_data> *_driverKeyData;
}

@property (nonatomic) BOOL sync;
@property (nonatomic) unsigned long long functionOptions;
@property (nonatomic) unsigned long long pipelineOptions;
@property (retain, nonatomic) MTLFunction *function;
@property (nonatomic) NSObject<OS_dispatch_data> *frameworkData;
@property (nonatomic) NSObject<OS_dispatch_data> *driverKeyData;
@property (retain, nonatomic) id<MTLPipelineCache> pipelineCache;
@property (nonatomic) struct { unsigned char key[32]; } archiveHashKey;
@property (retain, nonatomic) id<MTLBinaryArchive> destinationBinaryArchive;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) NSArray *visibleFunctions;
@property (copy, nonatomic) NSArray *privateVisibleFunctions;
@property (copy, nonatomic) NSDictionary *visibleFunctionGroups;

+ (id)newVisibleRequestWithFunction:(id)a0 descriptor:(id)a1;

- (void)dealloc;

@end
