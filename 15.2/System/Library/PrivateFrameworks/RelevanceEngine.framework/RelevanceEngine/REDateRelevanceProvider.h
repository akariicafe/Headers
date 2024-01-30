@class NSDate, NSDateInterval;

@interface REDateRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) NSDate *initialRelevanceDate;
@property (readonly, nonatomic) NSDate *irrelevantDate;
@property (readonly, nonatomic) double recentDuration;

+ (id)relevanceSimulatorID;
+ (id)_simulationDateFormatter;

- (unsigned long long)_hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithEventInterval:(id)a0;
- (id)initWithEventInterval:(id)a0 becomesIrrelevantDate:(id)a1;
- (id)initWithEventInterval:(id)a0 becomesIrrelevantDate:(id)a1 firstBecomesRelevantDate:(id)a2 recentDuration:(double)a3;
- (id)initWithEventDate:(id)a0;
- (id)initWithEventDate:(id)a0 duration:(double)a1;

@end
