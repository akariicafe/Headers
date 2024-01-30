@class NSArray, NSMutableDictionary;

@interface BPSHistogram : NSObject {
    NSMutableDictionary *_backingDictionary;
    NSArray *_keyType;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeAllScores;
- (BOOL)_correctKeyType:(id)a0;
- (void)_setKeyTypeFromKey:(id)a0;
- (void)_enumerateWithBlock:(id /* block */)a0 node:(id)a1 currentKey:(id)a2 stop:(BOOL *)a3;
- (id)scoreForKey:(id)a0;
- (void)addScore:(id)a0 forKey:(id)a1;
- (void)removeScoreForKey:(id)a0;
- (id)allKeysAtLevel:(unsigned long long)a0;
- (void)enumerateKeysAndScoresUsingBlock:(id /* block */)a0;

@end
