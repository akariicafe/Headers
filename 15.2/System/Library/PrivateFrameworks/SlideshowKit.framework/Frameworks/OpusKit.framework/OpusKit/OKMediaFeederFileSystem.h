@class NSArray, NSURL;

@interface OKMediaFeederFileSystem : OKMediaFeeder {
    NSURL *_directoryURL;
}

@property (retain) NSArray *mediaURLs;

+ (BOOL)isRemote;
+ (id)supportedSettings;
+ (BOOL)supportLiveUpdates;
+ (id)mediaFeederWithDirectoryURL:(id)a0;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)a0;
- (id)feederSettings;
- (BOOL)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)a0;
- (id)mediaObjectURLsAtIndexes:(id)a0;
- (id)indexesForMediaObjects:(id)a0;

@end
