@class NSString, SFPerformEntityQueryCommand;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_searchString;
    SFPerformEntityQueryCommand *_performCommand;
}

+ (BOOL)supportsSecureCoding;

- (id)command;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (void)updateSearchString:(id)a0;
- (id)searchString;
- (void).cxx_destruct;
- (id)spotlightQueryString;
- (id)tokenText;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (BOOL)isCommandEntitySearch;
- (BOOL)isScopedSearch;
- (BOOL)isServerEntitySearch;

@end
