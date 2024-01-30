@class NTKVideoPlayerListing;

@interface NTKVideoPlayerSingleVideoDataSource : NTKVideoPlayerDataSource {
    NTKVideoPlayerListing *_listing;
}

+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 andListing:(id)a2;
+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 endBehavior:(unsigned long long)a2 andFilename:(id)a3;

- (void).cxx_destruct;
- (id)currentListing;
- (id)initForDevice:(id)a0 listing:(id)a1 posterImage:(id)a2;

@end
