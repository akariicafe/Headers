@class UIImage, NTKVideoPlayerListing;

@interface NTKVideoPlayerDataSource : NSObject

@property (retain, nonatomic) NTKVideoPlayerListing *currentListing;
@property (retain, nonatomic) UIImage *posterImage;

- (id)init;
- (void).cxx_destruct;
- (void)advanceToNextListing:(unsigned long long)a0;
- (id)listingToQueueOncePlaybackStarts;
- (id)listingsToQueueAfterCurrent;

@end
