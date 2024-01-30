@interface MXForegroundExitData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long cumulativeCPUResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeNormalAppExitCount;
@property (readonly) unsigned long long cumulativeMemoryResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeBadAccessExitCount;
@property (readonly) unsigned long long cumulativeAbnormalExitCount;
@property (readonly) unsigned long long cumulativeIllegalInstructionExitCount;
@property (readonly) unsigned long long cumulativeAppWatchdogExitCount;

- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNormalAppExitCount:(unsigned long long)a0 withMemoryResourceLimitExitCount:(unsigned long long)a1 withCPUResourceLimitExitCount:(unsigned long long)a2 withBadAccessExitCount:(unsigned long long)a3 withAbnormalExitCount:(unsigned long long)a4 withIllegalInstructionExitCount:(unsigned long long)a5 withAppWatchDogExitCount:(unsigned long long)a6;
- (id)initWithNormalAppExitCount:(id)a0 memoryResourceLimitExitCount:(id)a1 cpuResourceLimitExitCount:(id)a2 badAccessExitCount:(id)a3 abnormalExitCount:(id)a4 illegalInstructionExitCount:(id)a5 appWatchDogExitCount:(id)a6;

@end
