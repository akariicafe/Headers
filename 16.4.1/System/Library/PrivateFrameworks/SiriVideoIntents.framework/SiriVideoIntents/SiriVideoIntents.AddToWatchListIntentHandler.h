@class AddToWatchListContentResolutionResult, AddToWatchListIntent, AddToWatchListIntentResponse;

@interface SiriVideoIntents.AddToWatchListIntentHandler : NSObject <AddToWatchListIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ watchListService;
    void /* unknown type, empty encoding */ analyticsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmAddToWatchList:(AddToWatchListIntent *)a0 completion:(void (^)(AddToWatchListIntentResponse *))a1;
- (void)handleAddToWatchList:(AddToWatchListIntent *)a0 completion:(void (^)(AddToWatchListIntentResponse *))a1;
- (void)resolveContentForAddToWatchList:(AddToWatchListIntent *)a0 withCompletion:(void (^)(AddToWatchListContentResolutionResult *))a1;

@end
