@class NSMutableDictionary, NSMutableOrderedSet;

@interface ICSearchResultSection : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *searchResults;
@property (retain, nonatomic) NSMutableDictionary *identifierToSearchResult;
@property (retain, nonatomic) NSMutableDictionary *hiddenSearchResults;
@property (retain, nonatomic) NSMutableDictionary *unhiddenSearchResults;

- (id)identifiers;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addSearchResults:(id)a0;
- (id)hiddenIdentifiers;
- (BOOL)removeSearchResultForIdentifier:(id)a0 forHiding:(BOOL)a1;
- (void)resetToSearchResults:(id)a0;

@end
