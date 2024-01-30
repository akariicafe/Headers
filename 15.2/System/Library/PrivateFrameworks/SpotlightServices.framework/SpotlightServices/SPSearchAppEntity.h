@class NSString;

@interface SPSearchAppEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_queryString;
}

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)queryString;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)tokenText;
- (BOOL)isAppEntitySearch;
- (id)initWithBundleIdentifier:(id)a0 appName:(id)a1 fromSuggestion:(BOOL)a2;
- (BOOL)isScopedSearch;
- (void)updateSearchString:(id)a0;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3;

@end
