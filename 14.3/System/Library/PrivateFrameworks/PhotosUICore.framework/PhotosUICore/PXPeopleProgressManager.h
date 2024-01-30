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

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateStatusForProgress:(double)a0 processCount:(unsigned long long)a1;
- (BOOL)hasSubstantialProcessingUsingMinAssetCount:(BOOL)a0;
- (void)_updateWithStatus:(unsigned long long)a0 progress:(double)a1;
- (void)_scheduleNextUpdate;
- (BOOL)_progressComplete:(double)a0;
- (void)updateProgressWithForce:(BOOL)a0;

@end
