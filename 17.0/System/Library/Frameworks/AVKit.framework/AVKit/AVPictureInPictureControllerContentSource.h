@class AVPictureInPictureContentViewController, AVPictureInPictureVideoCallViewController, AVPlayerLayer, UIView, AVSampleBufferDisplayLayer;
@protocol AVPictureInPictureContentSource, AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVPictureInPictureControllerContentSource : NSObject {
    struct CGSize { double width; double height; } _initialRenderSize;
    AVSampleBufferDisplayLayer *_sampleBufferDisplayLayer;
    id<AVPictureInPictureSampleBufferPlaybackDelegate> _sampleBufferPlaybackDelegate;
    UIView *_activeSourceView;
    AVPictureInPictureContentViewController *_activeContentViewController;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } initialRenderSize;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (readonly, weak, nonatomic) id<AVPictureInPictureSampleBufferPlaybackDelegate> sampleBufferPlaybackDelegate;
@property (readonly, weak, nonatomic) UIView *activeSourceView;
@property (readonly, nonatomic) AVPictureInPictureContentViewController *activeContentViewController;
@property (readonly, weak, nonatomic) UIView *activeVideoCallSourceView;
@property (readonly, nonatomic) AVPictureInPictureVideoCallViewController *activeVideoCallContentViewController;
@property (readonly, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, weak, nonatomic) id _activeVideoCallSourceView;
@property (readonly, nonatomic) id<AVPictureInPictureContentSource> _activeVideoCallContentViewController;
@property (readonly, nonatomic) BOOL hasInitialRenderSize;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

+ (long long)version;

- (id)init;
- (void)dealloc;
- (id)initWithPlayerLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithActiveVideoCallSourceView:(id)a0 contentViewController:(id)a1;
- (id)initWithSampleBufferDisplayLayer:(id)a0 initialRenderSize:(struct CGSize { double x0; double x1; })a1 playbackDelegate:(id)a2;
- (id)initWithSampleBufferDisplayLayer:(id)a0 playbackDelegate:(id)a1;
- (id)initWithSourceView:(id)a0 contentViewController:(id)a1 playerController:(id)a2;

@end
