@interface MiroMovieView : UIView

+ (Class)layerClass;

- (void)setPlayer:(id)a0;
- (id)player;
- (id)avPlayerLayer;
- (void)configurePlayerLayerAttributes;
- (void)cleanupPlayerLayerAttributes;

@end
