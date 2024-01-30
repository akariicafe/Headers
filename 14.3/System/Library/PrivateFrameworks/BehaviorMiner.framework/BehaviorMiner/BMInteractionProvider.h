@class BMMiningTaskConfig, _CDInteractionStore;

@interface BMInteractionProvider : NSObject

@property (retain, nonatomic) id contextKitClient;
@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInteractionStore:(id)a0;
- (id)initWithBMMiningTaskConfig:(id)a0;
- (id)interactionEventsForTypes:(id)a0 error:(id *)a1;
- (id)initWithInteractionStore:(id)a0 bmMiningTaskConfig:(id)a1;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)a0;
- (id)getResultsForRequest:(id)a0;

@end
