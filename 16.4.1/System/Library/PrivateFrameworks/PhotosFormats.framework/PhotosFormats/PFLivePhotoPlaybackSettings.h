@class AVVideoComposition;

@interface PFLivePhotoPlaybackSettings : NSObject

@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) float audioVolume;

- (id)init;
- (void).cxx_destruct;

@end
