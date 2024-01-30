@class NSString, NSSet, NSArray, NSCharacterSet;

@interface CHPrefixQuery : CHQuery {
    NSArray *_foundItems;
    NSSet *_validSuffixes;
    NSCharacterSet *_queryDelimiters;
}

@property (readonly, copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSSet *validSuffixes;
@property (readonly, copy, nonatomic) NSArray *foundItems;

+ (id)hashtagQueryForRecognitionSession:(id)a0;
+ (id)mentionQueryForRecognitionSession:(id)a0;
+ (id)hashtagDelimiters;
+ (id)prefixQueryWithPrefix:(id)a0 forRecognitionSession:(id)a1;

- (id)debugName;
- (void)stop;
- (void).cxx_destruct;
- (void)_setFoundItems:(id)a0;
- (BOOL)_isTokenStringMatchingQuery:(id)a0 allowPartialMatching:(BOOL)a1;
- (id)_normalizeString:(id)a0;
- (id)_normalizeSuffixes:(id)a0;
- (id)_prefixQueryResultsForSessionResult:(id)a0;
- (id)_queryResultForTokens:(id)a0 groupResult:(id)a1 candidateGroup:(id)a2;
- (id)_stringForTokens:(id)a0;
- (id)initWithRecognitionSession:(id)a0 prefix:(id)a1 validSuffixes:(id)a2 delimiters:(id)a3;
- (void)q_updateQueryResult;

@end
