@class NSTimer, PXPeopleProgressDataSource;

@interface PXPeopleProgressManager : NSObject

@property double progress;
@property (retain, nonatomic) NSTimer *statusTimer;
@property (retain, nonatomic) PXPeopleProgressDataSource *dataSource;
@property (nonatomic, getter=isMonitoringProgress) BOOL monitoringProgress;
@property (nonatomic) double updateInterval;
@property (readonly) BOOL processingComplete;
@property (readonly) BOOL featureUnlocked;
@property (readonly) BOOL shouldUseInterstitial;
@property (readonly) BOOL shouldUseProgressFooter;
@property (nonatomic) unsigned long long processingStatus;

+ (BOOL)hasSubstantialProcessingRemainingUsingMinAssetCount:(BOOL)a0 pendingAssetCount:(unsigned long long)a1 totalAssetCount:(unsigned long long)a2;
+ (BOOL)hasSubstantialProcessingRemainingUsingMinAssetCount:(BOOL)a0 prioritizedProcessedCount:(unsigned long long)a1 prioritizedTotalAllowedCount:(unsigned long long)a2 pendingAssetCount:(unsigned long long)a3 totalAssetCount:(unsigned long long)a4;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_progressComplete:(double)a0;
- (void)_scheduleNextUpdate;
- (void)_updateStatusForProgress:(double)a0 processCount:(unsigned long long)a1;
- (BOOL)hasSubstantialProcessingRemainingUsingMinAssetCount:(BOOL)a0;
- (void)updateProgressWithForce:(BOOL)a0;

@end
