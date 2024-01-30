@class WBSOpenSearchURLTemplate, NSString, NSDictionary, NSArray, WBSURLSuffixChecker;

@interface WBSSearchProvider : NSObject <NSCopying, NSSecureCoding> {
    WBSURLSuffixChecker *_suffixChecker;
    NSString *_queryKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *safeSearchURLTemplate;
@property (readonly, copy, nonatomic) NSDictionary *safeSearchURLQueryParameters;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate;
@property (readonly, copy, nonatomic) NSArray *hostSuffixes;
@property (readonly, copy, nonatomic) NSArray *pathPrefixes;
@property (readonly, nonatomic) BOOL usesSearchTermsFromFragment;
@property (readonly, copy, nonatomic) NSString *groupIdentifierQueryStringKey;

- (id)searchURLForUserTypedString:(id)a0;
- (id)_urlByEnsuringQueryItemInURL:(id)a0 percentEncodedQueryItemKey:(id)a1 percentEncodedQueryItemValue:(id)a2;
- (BOOL)urlIsValidSearch:(id)a0;
- (id)safeSearchURLForSearchURL:(id)a0;
- (id)userVisibleQueryFromSearchURL:(id)a0;
- (id)userVisibleQueryFromSearchURL:(id)a0 allowQueryThatLooksLikeURL:(BOOL)a1;
- (BOOL)searchShouldUseSafeSearchTemplate;
- (id)suggestionsURLForUserTypedString:(id)a0;
- (id)urlAttributingToSafariIfValidSearchURL:(id)a0;
- (id)urlByIncorporatingGroupIdentifier:(unsigned long long)a0 ifIsValidSearchResultsURL:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShortName:(id)a0 searchURLTemplate:(id)a1 safeSearchURLTemplate:(id)a2 safeSearchURLQueryParameters:(id)a3 usesSearchTermsFromFragment:(BOOL)a4 groupIdentifierQueryStringKey:(id)a5 suggestionsURLTemplate:(id)a6 hostSuffixes:(id)a7 pathPrefixes:(id)a8;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
