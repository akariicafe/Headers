@class NSString;

@interface REGroupRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *groupIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithGroupIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;

@end
