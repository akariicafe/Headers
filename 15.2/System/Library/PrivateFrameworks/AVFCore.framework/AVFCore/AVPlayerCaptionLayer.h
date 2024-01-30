@class NSSet, FigSubtitleCALayer, AVPlayerLayerIntermediateLayer, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface AVPlayerCaptionLayer : CALayer {
    FigSubtitleCALayer *_subtitleLayer;
    AVPlayerLayerIntermediateLayer *_closedCaptionLayer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AVPlayer *_player;
    AVPlayer *_playerBeingObserved;
    NSSet *_KVOInvokers;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _legibleContentInsets;
}

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } captionContentInsets;
@property (nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;

+ (id)captionLayerWithPlayer:(id)a0;

- (void)layoutSublayers;
- (void)_stopObservingPlayer:(id)a0;
- (void)_startObservingPlayer:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
