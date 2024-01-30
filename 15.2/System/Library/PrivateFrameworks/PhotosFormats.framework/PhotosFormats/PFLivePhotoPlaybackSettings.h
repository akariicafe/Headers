@class AVVideoComposition;

@interface PFLivePhotoPlaybackSettings : NSObject

@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) float audioVolume;

- (void).cxx_destruct;
- (id)init;

@end
