@class NSSet, NSArray, PGGraph, NSMutableDictionary, NSMutableArray;

@interface PGGraphNamingProcessor : NSObject

@property (readonly, nonatomic) unsigned long long runOptions;
@property (retain, nonatomic) NSMutableArray *analyzersToRun;
@property (readonly, nonatomic) NSSet *personNodesToName;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) unsigned long long numberOfSignals;
@property (retain, nonatomic) NSArray *sortedPoolOfContactIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *contactMatchesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier;

- (void).cxx_destruct;
- (id)initWithPersonNodes:(id)a0 runOptions:(unsigned long long)a1;
- (void)runNamingAnalysisWithProgressBlock:(id /* block */)a0;
- (void)enumerateContactSuggestionsForPersonNode:(id)a0 usingBlock:(id /* block */)a1;
- (void)_extractSignalsFromRunOptions;
- (id)_extractSortedPoolOfContactIdentifiers;
- (void)filterContactMatches;
- (void)_limitNumberOfContactSuggestionsPerPerson;
- (void)_removeSuggestionOfContact:(id)a0 forPerson:(id)a1;
- (id)_applyMessageFrequencyPenaltyToMatchScores:(id)a0;
- (id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)a0;
- (id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)a0;
- (id)matchPropertiesBetweenContactIdentifier:(id)a0 andPersonLocalIdentifier:(id)a1;
- (id)personNodesToNameFromPersonNodes:(id)a0;

@end
