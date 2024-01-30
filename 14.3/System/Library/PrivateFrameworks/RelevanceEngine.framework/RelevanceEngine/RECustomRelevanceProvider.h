@class REFeature;

@interface RECustomRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long value;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithFeature:(id)a0 value:(unsigned long long)a1;

@end
