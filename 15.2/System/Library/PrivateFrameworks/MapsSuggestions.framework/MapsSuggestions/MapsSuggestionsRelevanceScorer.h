@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (void)addScorer:(id)a0;
- (id)confidenceForMapItems:(id)a0;
- (id)confidenceForContacts:(id)a0 addresses:(id)a1;
- (void)preLoadAllScorers;
- (void).cxx_destruct;
- (id)init;

@end
