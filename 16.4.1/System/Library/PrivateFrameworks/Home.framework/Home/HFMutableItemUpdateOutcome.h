@class NSDictionary, NSMutableDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome

@property (retain, nonatomic) NSMutableDictionary *mutableResults;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic) unsigned long long outcomeType;

- (void)removeObjectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (void).cxx_destruct;
- (void)addResultsFromDictionary:(id)a0;
- (void)addResultsFromOutcome:(id)a0;
- (id)initWithResults:(id)a0 type:(unsigned long long)a1;
- (void)safeSetObject:(id)a0 forKey:(id)a1;

@end
