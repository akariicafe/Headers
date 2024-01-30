@class NSArray, NSURL;

@interface OKMediaFeederFileSystem : OKMediaFeeder {
    NSURL *_directoryURL;
}

@property (retain) NSArray *mediaURLs;

+ (BOOL)isRemote;
+ (id)mediaFeederWithDirectoryURL:(id)a0;
+ (BOOL)supportLiveUpdates;
+ (id)supportedSettings;

- (id)initWithDirectoryURL:(id)a0;
- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)init;
- (BOOL)canBePersisted;
- (id)feederSettings;
- (id)indexesForMediaObjects:(id)a0;
- (id)mediaObjectURLsAtIndexes:(id)a0;
- (id)mediaObjectsAtIndexes:(id)a0;
- (unsigned long long)numberOfMediaObjects;
- (id)reloadMediaObjectsWithCompletionHandler:(id /* block */)a0;

@end
