@class NSMutableDictionary;

@interface STMutableSizeDict : STSizeDict {
    NSMutableDictionary *_mutableDictionary;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasKey:(id)a0;
- (void)addSize:(id)a0 toKey:(id)a1;
- (void)plusEquals:(id)a0;
- (void)setSize:(id)a0 forKey:(id)a1;
- (void)removeSmallerThan:(long long)a0;

@end
