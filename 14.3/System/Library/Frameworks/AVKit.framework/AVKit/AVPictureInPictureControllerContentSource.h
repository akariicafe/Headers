@class AVSampleBufferDisplayLayer, AVPlayerLayer;
@protocol AVPictureInPictureContentSource, AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVPictureInPictureControllerContentSource : NSObject

@property (readonly, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (readonly, weak, nonatomic) id<AVPictureInPictureSampleBufferPlaybackDelegate> sampleBufferPlaybackDelegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } initialRenderSize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSampleBufferDisplayLayer:(id)a0 playbackDelegate:(id)a1;
- (id)initWithSampleBufferDisplayLayer:(id)a0 initialRenderSize:(struct CGSize { double x0; double x1; })a1 playbackDelegate:(id)a2;
- (void)_commonInitWithSampleBufferDisplayLayer:(id)a0 initialRenderSize:(struct CGSize { double x0; double x1; })a1 playbackDelegate:(id)a2;
- (id)initWithPlayerLayer:(id)a0;

@end
