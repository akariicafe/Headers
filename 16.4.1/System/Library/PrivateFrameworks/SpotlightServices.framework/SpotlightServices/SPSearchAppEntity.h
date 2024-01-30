@class NSString;

@interface SPSearchAppEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_queryString;
}

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateSearchString:(id)a0;
- (id)queryString;
- (void).cxx_destruct;
- (id)spotlightQueryString;
- (id)tokenText;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3 flags:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 appName:(id)a1 fromSuggestion:(BOOL)a2;
- (BOOL)isAppEntitySearch;
- (BOOL)isScopedSearch;

@end
