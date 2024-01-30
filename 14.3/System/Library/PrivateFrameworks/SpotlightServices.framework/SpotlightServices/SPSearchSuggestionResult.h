@class NSArray, SFSearchSuggestion;

@interface SPSearchSuggestionResult : SFSearchResult_SpotlightExtras

@property (readonly, nonatomic) SFSearchSuggestion *suggestion;
@property (retain, nonatomic) NSArray *searchEntities;

+ (BOOL)supportsSecureCoding;
+ (id)_richDisplayTextForSuggestion:(id)a0 forQuery:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSearchSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;

@end
