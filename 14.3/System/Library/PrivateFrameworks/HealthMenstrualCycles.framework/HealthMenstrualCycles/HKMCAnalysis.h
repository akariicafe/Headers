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
@property (readonly, copy) NSString *hk_redactedDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 recentSymptoms:(unsigned long long)a4 recentBasalBodyTemperature:(id)a5 lastLoggedDayIndex:(id)a6 lastMenstrualFlowDayIndex:(id)a7;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 cycles:(id)a3 recentSymptoms:(unsigned long long)a4 recentBasalBodyTemperature:(id)a5 lastLoggedDayIndex:(id)a6 lastMenstrualFlowDayIndex:(id)a7 ongoingCycleFactors:(id)a8;

@end
