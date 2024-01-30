@class AVObservationController, AVPlayerLayer;

@interface AVSecondScreenPlayerLayerView : UIView

@property (readonly, nonatomic) AVPlayerLayer *layer;
@property (weak, nonatomic) AVPlayerLayer *activeSourcePlayerLayer;
@property (retain, nonatomic) AVObservationController *observationController;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)startShowingContentFromSourcePlayerLayer:(id)a0;
- (void)stopShowingContentFromActiveSourcePlayerLayer;

@end
