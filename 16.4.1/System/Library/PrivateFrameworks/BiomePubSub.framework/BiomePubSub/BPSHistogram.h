@class NSArray, NSMutableDictionary;

@interface BPSHistogram : NSObject {
    NSMutableDictionary *_backingDictionary;
    NSArray *_keyType;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeAllScores;
- (id)allKeysAtLevel:(unsigned long long)a0;
- (BOOL)_correctKeyType:(id)a0;
- (void)_enumerateWithBlock:(id /* block */)a0 node:(id)a1 currentKey:(id)a2 stop:(BOOL *)a3;
- (void)_setKeyTypeFromKey:(id)a0;
- (void)addScore:(id)a0 forKey:(id)a1;
- (void)enumerateKeysAndScoresUsingBlock:(id /* block */)a0;
- (void)removeScoreForKey:(id)a0;
- (id)scoreForKey:(id)a0;

@end
