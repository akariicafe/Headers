@class NSMutableDictionary;

@interface STMutableSizeDict : STSizeDict {
    NSMutableDictionary *_mutableDictionary;
}

- (id)initWithDictionary:(id)a0;
- (BOOL)hasKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setSize:(id)a0 forKey:(id)a1;
- (void)addSize:(id)a0 toKey:(id)a1;
- (void)plusEquals:(id)a0;
- (void)removeSmallerThan:(long long)a0;

@end
