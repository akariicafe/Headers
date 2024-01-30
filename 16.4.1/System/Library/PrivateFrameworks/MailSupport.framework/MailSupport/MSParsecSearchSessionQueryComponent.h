@class NSString, NSObject;
@protocol OS_os_log;

@interface MSParsecSearchSessionQueryComponent : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) BOOL cannedSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_structuredQueryForComponents:(id)a0 hasCurrentMailboxScope:(BOOL)a1 languages:(id)a2;
+ (id)freeTextQueryComponentWithString:(id)a0;
+ (id)suggestionAtomQueryComponentWithCategory:(id)a0 scope:(id)a1 queryString:(id)a2 cannedSuggestion:(BOOL)a3;
+ (id)userTypedQueryComponentWithString:(id)a0 removingFreeTextTokenString:(id)a1;
+ (id)userTypedQueryComponentWithString:(id)a0 removingFreeTextTokens:(id)a1;

- (void).cxx_destruct;
- (id)_structuredQueryComponentWithLanguages:(id)a0;
- (id)initWithCategory:(id)a0 scope:(id)a1 queryString:(id)a2 cannedSuggestion:(BOOL)a3;

@end
