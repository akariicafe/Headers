@class AVPictureInPictureControllerContentSource;

@interface AVVideoCallPlayerController : AVPlayerController

@property (weak, nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (nonatomic) struct CGSize { double width; double height; } contentDimensions;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;

- (long long)timeControlStatus;
- (long long)status;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (double)rate;

@end
