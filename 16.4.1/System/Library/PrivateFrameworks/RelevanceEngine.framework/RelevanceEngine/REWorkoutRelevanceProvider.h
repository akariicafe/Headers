@interface REWorkoutRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long state;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithState:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionaryEncoding;

@end
