@interface SiriVideoIntents.AddToWatchListIntentHandler : NSObject <AddToWatchListIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ watchListService;
    void /* unknown type, empty encoding */ analyticsService;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveContentForAddToWatchList:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmAddToWatchList:(id)a0 completion:(id /* block */)a1;
- (void)handleAddToWatchList:(id)a0 completion:(id /* block */)a1;

@end
