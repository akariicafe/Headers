@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (id)init;
- (void).cxx_destruct;
- (void)addScorer:(id)a0;
- (void)preLoadAllScorers;
- (id)confidenceForMapItems:(id)a0;
- (id)confidenceForContacts:(id)a0 addresses:(id)a1;

@end
