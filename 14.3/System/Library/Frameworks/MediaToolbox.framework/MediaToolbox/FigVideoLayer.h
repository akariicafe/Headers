@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (id)init;
- (id)layerDisplayName;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)actionForKey:(id)a0;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)notificationBarrier;
- (BOOL)isVideoLayerBeingServiced;
- (id)initWithLayer:(id)a0;

@end
