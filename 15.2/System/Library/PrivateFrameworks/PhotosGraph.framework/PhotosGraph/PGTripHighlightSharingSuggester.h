@class NSIndexSet, NSString;

@interface PGTripHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
