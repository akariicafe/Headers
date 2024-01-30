@class NSString, SFSearchSuggestion, SPSearchEntity;

@interface SSSuggestionResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *suggestionString;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) SFSearchSuggestion *suggestion;
@property (retain, nonatomic) SPSearchEntity *entity;
@property (retain, nonatomic) NSString *contactIdentifier;

+ (id)buildResultWithResult:(id)a0 queryContext:(id)a1;
+ (id)buildResultWithSuggestion:(id)a0 queryContext:(id)a1;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildHighlightedTextForSuggestion;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)buildSymbolImage;
- (id)initWithResult:(id)a0 queryContext:(id)a1;
- (id)initWithSuggestion:(id)a0 queryContext:(id)a1;

@end
