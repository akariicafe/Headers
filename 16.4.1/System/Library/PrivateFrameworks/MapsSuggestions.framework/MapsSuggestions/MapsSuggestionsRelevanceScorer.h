@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (void)preLoadAllScorers;
- (id)confidenceForContacts:(id)a0 addresses:(id)a1;
- (void)addScorer:(id)a0;
- (id)init;
- (id)confidenceForMapItems:(id)a0;
- (void).cxx_destruct;

@end
