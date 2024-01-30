@class NSMutableDictionary;

@interface RTXPCActivityCriteria : NSObject

@property (retain, nonatomic) NSMutableDictionary *additionalCriteria;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double gracePeriod;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL requireNetworkConnectivity;
@property (readonly, nonatomic) BOOL requireInexpensiveNetworkConnectivity;
@property (readonly, nonatomic) unsigned long long networkTransferDirection;
@property (readonly, nonatomic) BOOL allowBattery;
@property (readonly, nonatomic) BOOL powerNap;
@property (nonatomic) double expectedDuration;
@property (nonatomic) BOOL cpuIntensive;
@property (nonatomic) BOOL userRequestedBackgroundTask;
@property (nonatomic) BOOL postInstall;
@property (nonatomic) BOOL requiresBuddyComplete;

+ (const char *)convertPriority:(unsigned long long)a0;
+ (const char *)convertNetworkTransferDirection:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInterval:(double)a0 gracePeriod:(double)a1 priority:(unsigned long long)a2 requireNetworkConnectivity:(BOOL)a3 requireInexpensiveNetworkConnectivity:(BOOL)a4 networkTransferDirection:(unsigned long long)a5 allowBattery:(BOOL)a6 powerNap:(BOOL)a7;

@end
