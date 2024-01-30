@interface PFFairPlayValidationManager : NSObject <PFFairPlayValidationManaging> {
    void /* unknown type, empty encoding */ keyLoader;
    void /* unknown type, empty encoding */ episodeRemovalManager;
    void /* unknown type, empty encoding */ episodeFetcher;
    void /* unknown type, empty encoding */ internalQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithEpisodeRemovalManager:(id)a0;
- (void)validateDownloadedEpisodesWithCompletion:(id /* block */)a0;

@end
