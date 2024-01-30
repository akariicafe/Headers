@class WBSCache, NSURL;

@interface ReadingListLeadImageCache : NSObject {
    WBSCache *_cache;
    NSURL *_directoryURL;
}

- (void)clearCache;
- (id)initWithDirectoryURL:(id)a0;
- (void).cxx_destruct;
- (id)loadImageSynchronouslyForIconUUID:(id)a0;

@end
