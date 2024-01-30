@class NSMutableDictionary;

@interface WFActionSearchRankedResults : WFActionSearchRankedCollection {
    NSMutableDictionary *_displayNames;
    NSMutableDictionary *_records;
}

- (void).cxx_destruct;
- (id)init;
- (id)rankedGroups;
- (void)addKey:(id)a0 withDisplayName:(id)a1 type:(unsigned long long)a2;
- (void)addAction:(id)a0 forKey:(id)a1 type:(unsigned long long)a2;

@end
