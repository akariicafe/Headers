@class NSString, NSArray, EMFStringStemmer, NSLocale;

@interface EMFQuery : NSObject <NSCopying> {
    NSArray *_queryTokens;
    NSArray *_queryTokensAnalyzed;
    NSString *_normalizedString;
}

@property (retain, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSString *trimmedQueryString;
@property (readonly, nonatomic) NSString *normalizedQueryString;
@property (retain, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) EMFStringStemmer *stringStemmer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithQueryString:(id)a0 andLocale:(id)a1;
- (id)tokenCounts;
- (id)_finalTokenAnalyzed:(BOOL)a0;
- (id)finalTokenAnalyzed;
- (id)finalTokenUnanalyzed;
- (id)initWithQueryString:(id)a0 andQueryTokens:(id)a1 andLocale:(id)a2;
- (id)initWithQueryTokens:(id)a0 andLocale:(id)a1;

@end
