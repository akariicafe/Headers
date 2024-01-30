@interface SiriVideoIntents.FindVideoIntentHandler : NSObject <FindVideoIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveContentForFindVideo:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmFindVideo:(id)a0 completion:(id /* block */)a1;
- (void)handleFindVideo:(id)a0 completion:(id /* block */)a1;

@end
