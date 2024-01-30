@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource

@property (retain, nonatomic) SKScene *scene;

- (BOOL)isOpaque;
- (void)dealloc;
- (id)textureSource;

@end
