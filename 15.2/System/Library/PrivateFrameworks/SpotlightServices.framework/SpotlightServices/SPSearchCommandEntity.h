@class NSString, SFPerformEntityQueryCommand;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_searchString;
    SFPerformEntityQueryCommand *_performCommand;
}

+ (BOOL)supportsSecureCoding;

- (id)searchString;
- (id)command;
- (void)encodeWithCoder:(id)a0;
- (id)symbolName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)tokenText;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (BOOL)isScopedSearch;
- (BOOL)isCommandEntitySearch;
- (void)updateSearchString:(id)a0;

@end
