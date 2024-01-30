@interface SCNDelegateSource : SCNImageSource

@property (retain, nonatomic) id delegate;

- (BOOL)isOpaque;
- (void)dealloc;
- (id)textureSource;

@end
