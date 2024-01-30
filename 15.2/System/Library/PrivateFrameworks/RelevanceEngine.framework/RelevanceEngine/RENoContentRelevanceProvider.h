@interface RENoContentRelevanceProvider : RERelevanceProvider

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;

@end
