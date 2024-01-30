@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {
    NSMutableArray *_priorities;
    NSMutableDictionary *_prioritiesToIndexes;
}

- (long long)indexOfPriority:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)nextPriorityFromPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (void)insertPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (BOOL)addPriorities:(id)a0;
- (void)appendRemainingPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)containsPriority:(double)a0;
- (BOOL)contains:(id)a0;
- (double)priorityOfIndex:(unsigned long long)a0;
- (id)initWithPriorities:(id)a0;

@end
