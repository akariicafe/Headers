@class NSString, NSLocale;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol> {
    int _buckets;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterNGramRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _tokenNGramRange;
    BOOL _shouldNormalizeTokens;
    BOOL _shouldNormalizeCharacters;
    NSLocale *_localeForNonwordTokens;
    BOOL _tokenizeNewlines;
    BOOL _intercept;
}

@property (nonatomic) BOOL normalize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBucketSize:(int)a0 andNgrams:(int)a1;
+ (id)withBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 localeForNonwordTokens:(id)a5 tokenizeNewlines:(BOOL)a6 withIntercept:(BOOL)a7;
+ (id)withBucketSize:(int)a0 ngrams:(int)a1 localeForNonwordTokens:(id)a2 tokenizeNewlines:(BOOL)a3 andIntercept:(BOOL)a4;
+ (id)withBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 withIntercept:(BOOL)a5;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)transform:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)transformBatch:(id)a0;
- (id)initWithBucketSize:(int)a0 ngrams:(int)a1 localeForNonwordTokens:(id)a2 tokenizeNewlines:(BOOL)a3 andIntercept:(BOOL)a4;
- (id)initWithBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 localeForNonwordTokens:(id)a5 tokenizeNewlines:(BOOL)a6 withIntercept:(BOOL)a7;
- (BOOL)isEqualToHashingVectorizer:(id)a0;

@end
