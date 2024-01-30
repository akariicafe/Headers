@class NSString;

@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval

@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned long long displayRefreshIntervalMachContinuousTime;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) BOOL hasOffScreenPassCount;
@property (readonly, nonatomic) unsigned int offScreenPassCount;
@property (readonly, nonatomic) BOOL didSkipRender;
@property (readonly, nonatomic) NSString *renderSkipReason;
@property (readonly, nonatomic) int renderServerPID;
@property (readonly, nonatomic) unsigned long long renderServerTID;

- (void).cxx_destruct;
- (id)initWithRenderServerRenderInterval:(id)a0;

@end
