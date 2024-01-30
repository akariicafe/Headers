@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder {
    NSArray *_mediaURLs;
}

+ (BOOL)isRemote;
+ (id)supportedSettings;
+ (id)mediaFeederWithMediaObjects:(id)a0;
+ (id)mediaFeederWithMediaURLs:(id)a0;
+ (BOOL)supportLiveUpdates;

- (id)initWithSettings:(id)a0;
- (id)initWithMediaObjects:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithMediaURLs:(id)a0;
- (id)feederSettings;
- (BOOL)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)a0;
- (id)mediaObjectURLsAtIndexes:(id)a0;
- (id)indexesForMediaObjects:(id)a0;

@end
