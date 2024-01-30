@class NSString;

@interface MSParsecSearchSessionQueryComponent : NSObject

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) BOOL cannedSuggestion;

+ (id)_structuredQueryForComponents:(id)a0 hasCurrentMailboxScope:(BOOL)a1;
+ (id)freeTextQueryComponentWithString:(id)a0;
+ (id)suggestionAtomQueryComponentWithCategory:(id)a0 scope:(id)a1 queryString:(id)a2 cannedSuggestion:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 scope:(id)a1 queryString:(id)a2 cannedSuggestion:(BOOL)a3;
- (id)_structuredQueryComponent;

@end
