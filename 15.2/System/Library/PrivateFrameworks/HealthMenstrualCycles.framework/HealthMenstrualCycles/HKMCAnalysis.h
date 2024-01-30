@class HKQuantity, NSArray, HKMCStatistics, NSString, NSNumber;

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *anchor;
@property (readonly, nonatomic) HKMCStatistics *statistics;
@property (readonly, nonatomic) NSArray *menstruationProjections;
@property (readonly, nonatomic) NSArray *fertileWindowProjections;
@property (readonly, nonatomic) NSArray *cycles;
@property (readonly, nonatomic) unsigned long long recentSymptoms;
@property (readonly, nonatomic) HKQuantity *recentBasalBodyTemperature;
@property (readonly, copy, nonatomic) NSNumber *lastLoggedDayIndex;
@property (readonly, copy, nonatomic) NSNumber *lastMenstrualFlowDayIndex;
@property (readonly, nonatomic) NSArray *ongoingCycleFactors;
@property (readonly, nonatomic) long long numberOfDailySleepHeartRateStatisticsForPast100Days;
@property (readonly, nonatomic) long long numberOfDailyAwakeHeartRateStatisticsForPast100Days;
@property (readonly, copy) NSString *hk_redactedDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 recentSymptoms:(unsigned long long)a4 recentBasalBodyTemperature:(id)a5 lastLoggedDayIndex:(id)a6 lastMenstrualFlowDayIndex:(id)a7;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 recentSymptoms:(unsigned long long)a4 recentBasalBodyTemperature:(id)a5 lastLoggedDayIndex:(id)a6 lastMenstrualFlowDayIndex:(id)a7 ongoingCycleFactors:(id)a8;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 recentSymptoms:(unsigned long long)a4 recentBasalBodyTemperature:(id)a5 lastLoggedDayIndex:(id)a6 lastMenstrualFlowDayIndex:(id)a7 ongoingCycleFactors:(id)a8 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)a9 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)a10;

@end
