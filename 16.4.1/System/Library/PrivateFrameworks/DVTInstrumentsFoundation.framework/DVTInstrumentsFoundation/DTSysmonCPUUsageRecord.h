@class NSArray, DTSysmonCPUUsageEntry;

@interface DTSysmonCPUUsageRecord : NSObject

@property (nonatomic) unsigned int cpuCount;
@property (nonatomic) unsigned int enabledCPUs;
@property (retain, nonatomic) DTSysmonCPUUsageEntry *averageCPUUsage;
@property (retain, nonatomic) NSArray *perCPUUsage;

- (void).cxx_destruct;

@end
