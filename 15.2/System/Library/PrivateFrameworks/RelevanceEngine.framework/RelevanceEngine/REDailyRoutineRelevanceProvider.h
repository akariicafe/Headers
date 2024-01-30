@interface REDailyRoutineRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long type;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithDailyRoutineType:(unsigned long long)a0;

@end
