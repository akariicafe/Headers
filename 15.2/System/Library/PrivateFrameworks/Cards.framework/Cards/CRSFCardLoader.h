@class NSCache;

@interface CRSFCardLoader : NSObject {
    NSCache *_loadedCards;
}

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)init;
- (void)loadSFCard:(id)a0 completion:(id /* block */)a1;

@end
