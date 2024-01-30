@interface SiriVideoIntents.FindVideoIntentHandler : NSObject <FindVideoIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveContentForFindVideo:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmFindVideo:(id)a0 completion:(id /* block */)a1;
- (void)handleFindVideo:(id)a0 completion:(id /* block */)a1;

@end
