@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {
    unsigned long long _cachedHash;
    unsigned long long _priority;
    RERelevanceProviderEnvironment *_environment;
}

+ (id)customRelevanceProviderForFeature:(id)a0 withValue:(id)a1;
+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)environment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnvironment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryEncoding;
- (id)providerWithPriority:(unsigned long long)a0;
- (unsigned long long)relevancePriority;

@end
