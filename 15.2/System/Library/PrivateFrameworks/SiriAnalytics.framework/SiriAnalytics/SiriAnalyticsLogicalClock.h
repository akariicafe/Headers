@class NSUUID, SiriAnalyticsLogicalClockStatistics;

@interface SiriAnalyticsLogicalClock : NSObject

@property (readonly, nonatomic) NSUUID *clockIdentifier;
@property (readonly, nonatomic) long long timestampOffset;
@property (readonly, nonatomic) SiriAnalyticsLogicalClockStatistics *clockStatistics;

- (void)stopClock;
- (id)logicalTimestampForMachAbsoluteTime:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithClockIdentifier:(id)a0 timestampOffset:(unsigned long long)a1;
- (BOOL)containsTimestamp:(unsigned long long)a0;

@end
