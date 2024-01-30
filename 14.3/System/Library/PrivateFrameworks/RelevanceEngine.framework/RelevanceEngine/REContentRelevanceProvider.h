@class NSArray;

@interface REContentRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSArray *keywords;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithContent:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithKeywords:(id)a0;

@end
