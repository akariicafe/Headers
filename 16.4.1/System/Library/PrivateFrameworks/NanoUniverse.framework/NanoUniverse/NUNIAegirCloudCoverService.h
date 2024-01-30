@class NSURL, _TtC12NanoUniverse22AegirCloudCoverService;

@interface NUNIAegirCloudCoverService : NSObject {
    _TtC12NanoUniverse22AegirCloudCoverService *_cloudService;
}

@property (retain, nonatomic) NSURL *directory;

- (void).cxx_destruct;
- (BOOL)shouldFetchData;
- (id)initWithImageScale:(float)a0;
- (void)retrieveCloudTextureURLs:(id /* block */)a0;

@end
