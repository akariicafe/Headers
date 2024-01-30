@class NSArray;

@interface DTSysmonTapConfig : DTTapConfig

@property (nonatomic) unsigned long long sampleInterval;
@property (retain) NSArray *processAttributes;
@property (retain) NSArray *systemAttributes;
@property (retain) NSArray *coalitionAttributes;
@property BOOL sampleCPUUsage;
@property (copy, nonatomic) id /* block */ sessionHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPid:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)pids;
- (void)setPids:(id)a0;

@end
