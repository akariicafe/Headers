@class NSString;

@interface BWEspressoInferenceContext : NSObject {
    void *_espressoContext;
    unsigned long long _options;
    BOOL _shareIntermediateBuffer;
    void *_rootIntermediateBufferPlan;
    NSString *_sharedBufferNetworksPath;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, nonatomic) void *espressoContext;
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;

+ (void)initialize;

- (id)initWithExecutionTarget:(int)a0 shareIntermediateBuffer:(BOOL)a1;
- (id)initWithExecutionTarget:(int)a0;
- (int)prepareForInferenceUsingProcessingSession:(id)a0;
- (int)configureIntermediateBufferSharingForPlanPrebuild:(void *)a0;
- (int)configureIntermediateBufferSharingForPlanPostbuild:(void *)a0;
- (void)dealloc;
- (id)description;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)a0;

@end
