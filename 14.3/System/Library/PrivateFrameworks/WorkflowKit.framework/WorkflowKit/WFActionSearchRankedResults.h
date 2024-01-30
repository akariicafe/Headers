@class NSMutableDictionary;

@interface WFActionSearchRankedResults : WFActionSearchRankedCollection {
    NSMutableDictionary *_displayNames;
    NSMutableDictionary *_records;
}

- (id)init;
- (void).cxx_destruct;
- (void)addKey:(id)a0 withDisplayName:(id)a1 type:(unsigned long long)a2;
- (void)addAction:(id)a0 forKey:(id)a1 type:(unsigned long long)a2;
- (id)rankedGroups;

@end
