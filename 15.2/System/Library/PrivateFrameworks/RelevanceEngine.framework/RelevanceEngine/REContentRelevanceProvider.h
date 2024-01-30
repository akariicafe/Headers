@class NSArray;

@interface REContentRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSArray *keywords;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithKeywords:(id)a0;

@end
