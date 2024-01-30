@class NSCache, PPLocalContactStore;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {
    PPLocalContactStore *_localContactStore;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
}

- (void)clearCaches;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (id)initWithOptions:(unsigned char)a0;
- (void).cxx_destruct;
- (id)init;

@end
