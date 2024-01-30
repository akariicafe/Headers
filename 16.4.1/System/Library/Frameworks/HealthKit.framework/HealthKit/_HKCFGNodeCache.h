@class NSMutableDictionary;

@interface _HKCFGNodeCache : NSObject {
    NSMutableDictionary *_cache;
}

- (id)nodesForPosition:(unsigned long long)a0 nonTerminal:(id)a1 withLengthAllowance:(unsigned long long)a2;
- (void)cacheNodes:(id)a0 forPosition:(unsigned long long)a1 nonTerminal:(id)a2 lengthAllowance:(unsigned long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
