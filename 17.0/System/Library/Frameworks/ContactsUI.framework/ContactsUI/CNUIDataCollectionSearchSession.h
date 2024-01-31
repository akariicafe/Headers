@interface CNUIDataCollectionSearchSession : NSObject

@property (nonatomic) BOOL pendingResults;
@property (nonatomic) BOOL pendingSuggestionsResults;

+ (void)begin;
+ (id)currentSession;
+ (void)end;

- (void)didFetchResultSuggested:(BOOL)a0;
- (void)didSelectResult:(id)a0;
- (void)searchStringDidChange;

@end
