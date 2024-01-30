@class NSIndexSet, NSString;

@interface PGDayHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canSuggestHighlightNodeWithoutPeople:(id)a0 loggingConnection:(id)a1;
+ (BOOL)shouldSuggestHighlightNode:(id)a0 neighborScoreComputer:(id)a1 loggingConnection:(id)a2;

- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
