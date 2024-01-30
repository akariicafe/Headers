@interface REDailyRoutineRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long type;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDailyRoutineType:(unsigned long long)a0;

@end
