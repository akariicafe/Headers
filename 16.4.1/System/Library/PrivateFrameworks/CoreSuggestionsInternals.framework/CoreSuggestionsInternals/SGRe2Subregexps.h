@class NSArray, SGRe2PrefilterTree;

@interface SGRe2Subregexps : SGRe2 {
    NSArray *_subregexps;
    SGRe2PrefilterTree *_prefilter;
}

- (id)description;
- (void).cxx_destruct;
- (int)_enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (id)existsInUtf8:(const char *)a0;
- (id)initWithSubregexps:(id)a0 prefilter:(id)a1;
- (id)matchesUtf8:(const char *)a0;

@end
