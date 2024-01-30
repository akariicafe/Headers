@interface REMotionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long motionTypes;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithMotionTypes:(unsigned long long)a0;

@end
