@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {
    unsigned long long _cachedHash;
    unsigned long long _priority;
    RERelevanceProviderEnvironment *_environment;
}

+ (id)relevanceSimulatorID;
+ (id)customRelevanceProviderForFeature:(id)a0 withValue:(id)a1;

- (unsigned long long)_hash;
- (void)setEnvironment:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)environment;
- (unsigned long long)hash;
- (id)dictionaryEncoding;
- (unsigned long long)relevancePriority;
- (id)providerWithPriority:(unsigned long long)a0;

@end
