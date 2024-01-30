@interface CNUIDataCollectionSearchSession : NSObject

@property (nonatomic) BOOL pendingResults;
@property (nonatomic) BOOL pendingSuggestionsResults;

+ (void)end;
+ (id)currentSession;
+ (void)begin;

- (void)searchStringDidChange;
- (void)didFetchResultSuggested:(BOOL)a0;
- (void)didSelectResult:(id)a0;

@end
