@class NSMutableDictionary, NSMutableOrderedSet;

@interface ICSearchResultSection : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *searchResults;
@property (retain, nonatomic) NSMutableDictionary *identifierToSearchResult;
@property (retain, nonatomic) NSMutableDictionary *hiddenSearchResults;
@property (retain, nonatomic) NSMutableDictionary *unhiddenSearchResults;

- (id)identifiers;
- (void)addSearchResults:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)hiddenIdentifiers;
- (BOOL)removeSearchResultForIdentifier:(id)a0 forHiding:(BOOL)a1;
- (void)resetToSearchResults:(id)a0;

@end
