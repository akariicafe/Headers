@interface CoreMediaDownload : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double estimatedDuration;
@property (nonatomic) double prevRunBusyTime;
@property (nonatomic) double prevRunIdleTime;
@property (nonatomic) double thisRunStartTime;
@property (nonatomic) double quarantineStartTime;
@property (nonatomic) unsigned int downloadState;
@property (nonatomic) unsigned long long prevRunsIfTypeRxBytes;
@property (nonatomic) unsigned long long prevRunsIfTypeTxBytes;
@property (nonatomic) unsigned long long thisRunStartfTypeRxBytes;
@property (nonatomic) unsigned long long thisRunStartfTypeTxBytes;

- (id)description;
- (id)coreMediaDownloadStateToString:(unsigned int)a0;

@end
