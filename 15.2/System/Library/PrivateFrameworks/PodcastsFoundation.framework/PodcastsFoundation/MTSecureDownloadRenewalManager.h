@interface MTSecureDownloadRenewalManager : NSObject {
    void /* unknown type, empty encoding */ urlProtocolDelegate;
    void /* unknown type, empty encoding */ secureKeyLoader;
    void /* unknown type, empty encoding */ removalLock;
    void /* unknown type, empty encoding */ renewalLock;
}

+ (id)inContextKeyDataFor:(long long)a0 ctx:(id)a1;

- (void)willEnterForeground;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUrlProtocolDelegate:(id)a0;
- (void)requestSecureDeletionOf:(long long)a0;
- (void)requestSecureDeletionOfOrphanedKeys;

@end
