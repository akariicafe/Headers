@class NSString, NSMutableArray, NSNumber;

@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval

@property (retain, nonatomic) NSMutableArray *imageQueueSampleEvents;
@property (retain, nonatomic) NSMutableArray *clientDrawableIntervals;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned long long displayRefreshIntervalMachContinuousTime;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) BOOL hasOffScreenPassCount;
@property (readonly, nonatomic) unsigned int offScreenPassCount;
@property (readonly, nonatomic) BOOL didSkipRender;
@property (readonly, nonatomic) NSString *renderSkipReason;
@property (readonly, nonatomic) int renderServerPID;
@property (readonly, nonatomic) unsigned long long renderServerTID;
@property (readonly, nonatomic) NSNumber *synchronousMetalShaderCompileCount;
@property (readonly, nonatomic) NSNumber *cachingLayersRerenderCount;
@property (readonly, nonatomic) NSNumber *fallbackShaderDrawCount;

- (void).cxx_destruct;
- (id)initWithRenderServerRenderInterval:(id)a0;

@end
