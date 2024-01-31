@class AVSampleBufferDisplayLayerPlayerController, AVSampleBufferDisplayLayer, CALayerHost, AVPictureInPictureIndicatorLayer, AVObservationController, AVPictureInPictureSampleBufferDisplayLayerHostView;

@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView

@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlayerController *playerController;
@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *placeholderLayer;
@property (retain, nonatomic) AVPictureInPictureSampleBufferDisplayLayerHostView *sbdlHostView;
@property (weak, nonatomic) CALayerHost *sourceLayerHost;
@property (nonatomic) unsigned int sourceContextId;
@property (nonatomic) struct CGSize { double width; double height; } lastKnownRenderSize;
@property (nonatomic) struct CGSize { double width; double height; } imageQueueSize;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sourceLayer;
@property (nonatomic, getter=isPIPModeEnabled) BOOL PIPModeEnabled;

- (void)dealloc;
- (void)_updateGeometry;
- (id)initWithSourceLayer:(id)a0 playerController:(id)a1;
- (void).cxx_destruct;
- (id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (void)layoutSubviews;
- (void)_updateSourceLayerHost;

@end
