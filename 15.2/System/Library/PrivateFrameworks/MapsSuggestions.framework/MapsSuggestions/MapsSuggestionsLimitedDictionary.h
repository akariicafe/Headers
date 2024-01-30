@class NSString, NSMutableDictionary, NSMutableArray;

@interface MapsSuggestionsLimitedDictionary : NSObject <MapsSuggestionsTriggerObserver> {
    unsigned long long _maxCapacity;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_hits;
    NSMutableArray *_order;
    unsigned long long _totalHits;
    unsigned long long _totalMisses;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)hitsOnKey:(id)a0;
- (void)triggerFired:(id)a0;
- (double)totalHitRatio;
- (id)objectForKeyedSubscript:(id)a0;

@end
