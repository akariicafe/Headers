@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithLayer:(id)a0;
- (BOOL)isVideoLayerBeingServiced;
- (void)notificationBarrier;
- (id)init;
- (id)layerDisplayName;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)dealloc;

@end
