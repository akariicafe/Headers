@interface REActivityRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) BOOL closedActiveEngergy;
@property (readonly, nonatomic) BOOL closedExerciseTime;
@property (readonly, nonatomic) BOOL closedStandHour;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithActiveEnergyState:(BOOL)a0 exerciseTimeState:(BOOL)a1 standHourState:(BOOL)a2;

@end
