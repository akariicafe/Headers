@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource

@property (retain, nonatomic) CALayer *layer;

- (BOOL)isOpaque;
- (void)dealloc;
- (id)textureSource;

@end
