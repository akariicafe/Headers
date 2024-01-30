@interface PXSearchTokenSuggestionModelTranslator : NSObject

+ (BOOL)_isRTL;
+ (id)searchTokenSuggestionsFromCompletions:(id)a0 searchText:(id)a1;
+ (id)_attributedTitleForTokenTitle:(id)a0 searchText:(id)a1;
+ (id)searchTokenSuggestionsFromNextTokenSuggestions:(id)a0;
+ (id)searchTokenSuggestionsFromWordEmbeddings:(id)a0 sceneAncestryInformation:(id)a1 searchText:(id)a2;
+ (id)_attributedTitleForWordEmbeddingMatchedText:(id)a0 replacementText:(id)a1 searchText:(id)a2;
+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)a0 sceneAncestryInformation:(id)a1;
+ (id)_sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)a0;

- (id)init;

@end
