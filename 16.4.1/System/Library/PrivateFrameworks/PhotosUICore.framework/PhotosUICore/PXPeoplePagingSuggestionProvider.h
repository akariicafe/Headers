@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject

@property (copy, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSMutableArray *unvisitedSuggestions;
@property (retain, nonatomic) NSMutableArray *visitedSuggestions;

- (id)init;
- (void).cxx_destruct;
- (void)appendSuggestionArray:(id)a0;
- (BOOL)hasNextSuggestions;
- (BOOL)hasPreviousSuggestions;
- (id)nextSuggestionsWithPageLimit:(long long)a0;
- (id)previousSuggestions;
- (void)removeAllSuggestions;
- (void)removeSuggestions:(id)a0;

@end
