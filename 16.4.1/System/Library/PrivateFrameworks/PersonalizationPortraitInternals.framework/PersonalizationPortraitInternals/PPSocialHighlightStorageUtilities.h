@class _PASLock;

@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_lock;
}

- (void)clearCache;
- (id)init;
- (id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)a0;
- (void).cxx_destruct;

@end
