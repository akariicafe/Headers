@class SNLPSSUMatcher;

@interface SSUMatcherBuilder : NSObject {
    SNLPSSUMatcher *__matcherPtr;
}

+ (id)buildMatcher:(id)a0 error:(id *)a1;
+ (id)sharedBuilder;

- (id)_init;
- (void).cxx_destruct;
- (id)getMatcherRef:(id /* block */)a0 error:(id *)a1;
- (BOOL)hasMatcher;

@end
