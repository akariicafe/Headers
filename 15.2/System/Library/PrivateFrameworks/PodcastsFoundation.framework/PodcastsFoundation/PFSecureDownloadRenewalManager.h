@class MTSecureDownloadRenewalManager;

@interface PFSecureDownloadRenewalManager : NSObject {
    MTSecureDownloadRenewalManager *_manager;
}

+ (id)inContextKeyDataFor:(long long)a0 ctx:(id)a1;

- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)requestSecureDeletionOfEpisodeWithAdamID:(long long)a0;
- (id)initWithURLProtocolDelegate:(id)a0;
- (void)requestSecureDeletionOfOrphanedKeys;

@end
