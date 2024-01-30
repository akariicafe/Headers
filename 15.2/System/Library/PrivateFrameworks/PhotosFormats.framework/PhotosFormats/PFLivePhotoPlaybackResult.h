@class AVAsset;

@interface PFLivePhotoPlaybackResult : NSObject

@property (nonatomic) struct CGImage { } *photo;
@property (nonatomic) int photoExifOrientation;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (retain, nonatomic) AVAsset *videoAsset;

- (void).cxx_destruct;
- (void)dealloc;

@end
