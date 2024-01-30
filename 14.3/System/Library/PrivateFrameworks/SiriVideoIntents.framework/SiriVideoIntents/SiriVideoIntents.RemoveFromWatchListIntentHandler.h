@interface SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject <RemoveFromWatchListIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ watchListService;
    void /* unknown type, empty encoding */ analyticsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveContentForRemoveFromWatchList:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmRemoveFromWatchList:(id)a0 completion:(id /* block */)a1;
- (void)handleRemoveFromWatchList:(id)a0 completion:(id /* block */)a1;

@end
