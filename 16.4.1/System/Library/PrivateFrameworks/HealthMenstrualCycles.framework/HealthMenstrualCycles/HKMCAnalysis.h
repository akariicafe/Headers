@class NSArray, HKMCStatistics, HKMCRecentBasalBodyTemperature, NSString, NSNumber;

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *anchor;
@property (readonly, nonatomic) HKMCStatistics *statistics;
@property (readonly, nonatomic) NSArray *menstruationProjections;
@property (readonly, nonatomic) NSArray *fertileWindowProjections;
@property (readonly, nonatomic) NSArray *cycles;
@property (readonly, nonatomic) NSArray *deviations;
@property (readonly, nonatomic) unsigned long long recentSymptoms;
@property (readonly, nonatomic) HKMCRecentBasalBodyTemperature *recentBasalBodyTemperature;
@property (readonly, copy, nonatomic) NSNumber *lastLoggedDayIndex;
@property (readonly, copy, nonatomic) NSNumber *lastMenstrualFlowDayIndex;
@property (readonly, nonatomic) BOOL isPeriodLogLate;
@property (readonly, nonatomic) NSArray *ongoingCycleFactors;
@property (readonly, nonatomic) long long numberOfDailySleepHeartRateStatisticsForPast100Days;
@property (readonly, nonatomic) long long numberOfDailyAwakeHeartRateStatisticsForPast100Days;
@property (readonly, copy) NSString *hk_redactedDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 deviations:(id)a4 recentSymptoms:(unsigned long long)a5 recentBasalBodyTemperature:(id)a6 lastLoggedDayIndex:(id)a7 lastMenstrualFlowDayIndex:(id)a8 isPeriodLogLate:(BOOL)a9 ongoingCycleFactors:(id)a10;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 deviations:(id)a4 recentSymptoms:(unsigned long long)a5 recentBasalBodyTemperature:(id)a6 lastLoggedDayIndex:(id)a7 lastMenstrualFlowDayIndex:(id)a8 isPeriodLogLate:(BOOL)a9 ongoingCycleFactors:(id)a10 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)a11 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)a12;

@end
