@class NSString;

@interface REGroupRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *groupIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;

@end
