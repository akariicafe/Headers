@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject

@property (copy, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSMutableArray *unvisitedSuggestions;
@property (retain, nonatomic) NSMutableArray *visitedSuggestions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasNextSuggestions;
- (BOOL)hasPreviousSuggestions;
- (id)previousSuggestions;
- (id)nextSuggestionsWithPageLimit:(long long)a0;
- (void)appendSuggestionArray:(id)a0;
- (void)removeSuggestions:(id)a0;
- (void)removeAllSuggestions;

@end
