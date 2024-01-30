@interface MiroMovieView : UIView

+ (Class)layerClass;

- (void)setPlayer:(id)a0;
- (id)avPlayerLayer;
- (id)player;
- (void)configurePlayerLayerAttributes;
- (void)cleanupPlayerLayerAttributes;

@end
