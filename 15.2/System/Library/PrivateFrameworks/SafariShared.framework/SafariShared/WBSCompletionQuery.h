@class NSString, NSURLRequest, NSArray;

@interface WBSCompletionQuery : NSObject <NSCopying> {
    NSString *_normalizedQueryStringForParsec;
}

@property (class, readonly, nonatomic) long long currentQueryID;

@property (copy, nonatomic) NSString *parsecFeedbackQueryIdentifier;
@property (copy, nonatomic) NSURLRequest *parsecSearchRequest;
@property (readonly, nonatomic) struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } timestamp;
@property (copy, nonatomic) NSString *searchSuggestionProviderIdentifier;
@property (nonatomic) struct duration<long long, std::ratio<1, 1000>> { long long __rep_; } searchSuggestionProviderLatency;
@property (nonatomic) struct duration<long long, std::ratio<1, 1000>> { long long __rep_; } parsecLatency;
@property (nonatomic) unsigned long long indexInFeedbackArray;
@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSString *normalizedQueryStringForParsec;
@property (nonatomic, getter=isForLastSearch) BOOL forLastSearch;
@property (copy, nonatomic) NSArray *queryItems;
@property (copy) NSArray *querySuggestions;
@property (copy, nonatomic) NSString *rewrittenQueryStringFromParsec;
@property (readonly, nonatomic) long long queryID;
@property (nonatomic) unsigned long long triggerEvent;

+ (id)recentAndSuggestedCompletionStringsByMergingRecentSearches:(id)a0 withSuggestions:(id)a1 literalSearch:(id)a2;

- (id)initWithQueryString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithQueryString:(id)a0 queryID:(long long)a1;
- (id)initWithQueryString:(id)a0 queryID:(long long)a1 triggerEvent:(unsigned long long)a2;
- (id)_initWithQueryString:(id)a0 queryID:(long long)a1 timestamp:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a2 indexInFeedbackArray:(unsigned long long)a3 triggerEvent:(unsigned long long)a4;
- (id)initWithQueryString:(id)a0 triggerEvent:(unsigned long long)a1;

@end
