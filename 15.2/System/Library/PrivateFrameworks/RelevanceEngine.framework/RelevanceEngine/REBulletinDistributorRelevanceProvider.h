@class NSString;

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *bulletinSectionIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithBulletinSectionIdentifier:(id)a0;

@end
