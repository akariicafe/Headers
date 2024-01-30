@interface PFDispatchingFairPlayValidationManaging : NSObject <PFFairPlayValidationManaging> {
    void /* unknown type, empty encoding */ wrappedInstance;
    void /* unknown type, empty encoding */ responseQueue;
}

+ (id)receiveOn:(id)a0 manager:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)validateDownloadedEpisodesWithCompletion:(id /* block */)a0;

@end
