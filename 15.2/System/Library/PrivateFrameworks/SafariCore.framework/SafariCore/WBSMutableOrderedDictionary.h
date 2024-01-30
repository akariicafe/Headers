@class NSArray, WBSMutableOrderedSet, NSMutableDictionary;

@interface WBSMutableOrderedDictionary : NSObject {
    WBSMutableOrderedSet *_mutableOrderedSetOfKeys;
    NSMutableDictionary *_mutableDictionary;
    unsigned long long _maximumCount;
}

@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) NSArray *orderedValues;

- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithMaximumCount:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
