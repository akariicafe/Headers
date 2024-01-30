@interface MTSecureDownloadRenewalManager : NSObject {
    void /* unknown type, empty encoding */ analyticsChannel;
    void /* unknown type, empty encoding */ bugReporter;
    void /* unknown type, empty encoding */ secureKeyLoader;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ removalLock;
    void /* unknown type, empty encoding */ renewalLock;
}

+ (id)inContextKeyDataFor:(long long)a0 ctx:(id)a1;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)requestSecureDeletionOf:(long long)a0 completionHandler:(id /* block */)a1;
- (void)requestSecureDeletionOfOrphanedKeysWithCompletionHandler:(id /* block */)a0;
- (void)updateDRMKeysForDownloads;
- (void)updateDRMKeysForDownloadsWithUrlProtocolDelegate:(id)a0;

@end
