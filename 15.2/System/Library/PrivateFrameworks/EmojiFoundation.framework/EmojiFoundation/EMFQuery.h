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

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)initWithQueryString:(id)a0 andLocale:(id)a1;
- (id)initWithQueryString:(id)a0 andQueryTokens:(id)a1 andLocale:(id)a2;
- (id)_finalTokenAnalyzed:(BOOL)a0;
- (id)initWithQueryTokens:(id)a0 andLocale:(id)a1;
- (id)finalTokenAnalyzed;
- (id)finalTokenUnanalyzed;
- (id)tokenCounts;

@end
