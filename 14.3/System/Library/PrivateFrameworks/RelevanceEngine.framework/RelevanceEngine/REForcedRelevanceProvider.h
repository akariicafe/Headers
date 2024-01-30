@interface REForcedRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) float relevance;
@property (readonly, nonatomic) BOOL isHistoric;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithForcedRelevance:(float)a0 isHistoric:(BOOL)a1;
- (id)initWithForcedRelevance:(float)a0;

@end
