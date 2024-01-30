@class WBSCache, NSURL;

@interface ReadingListLeadImageCache : NSObject {
    WBSCache *_cache;
    NSURL *_directoryURL;
}

- (void)clearCache;
- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (id)loadImageSynchronouslyForIconUUID:(id)a0;

@end
