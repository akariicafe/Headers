@class NSData;

@interface SGRe2Basic : SGRe2 {
    NSData *_patternData;
    void *_pattern;
    BOOL _isTrivial;
}

- (id)description;
- (id)hashId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRegexp:(id)a0;
- (id)initWithRegexpData:(id)a0;
- (id)existsInUtf8:(const char *)a0;
- (id)matchesUtf8:(const char *)a0;
- (void)enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (int)_enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;

@end
