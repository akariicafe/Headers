@interface REPriorityRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) float priority;

+ (id)relevanceSimulatorID;

- (id)initWithPriority:(float)a0;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionaryEncoding;

@end
