@class UIImage, NTKVideoPlayerListing;

@interface NTKVideoPlayerDataSource : NSObject

@property (retain, nonatomic) NTKVideoPlayerListing *currentListing;
@property (retain, nonatomic) UIImage *posterImage;

- (void).cxx_destruct;
- (id)init;
- (void)advanceToNextListing:(unsigned long long)a0;
- (id)listingsToQueueAfterCurrent;
- (id)listingToQueueOncePlaybackStarts;

@end
