@class AVPictureInPictureControllerContentSource;

@interface AVVideoCallPlayerController : AVPlayerController

@property (weak, nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (nonatomic) struct CGSize { double width; double height; } contentDimensions;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;

- (double)rate;
- (long long)timeControlStatus;
- (BOOL)isPlaying;
- (long long)status;
- (void).cxx_destruct;

@end
