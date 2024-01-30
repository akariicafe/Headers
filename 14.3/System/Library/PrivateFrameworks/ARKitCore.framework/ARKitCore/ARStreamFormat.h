@interface ARStreamFormat : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (readonly, nonatomic) long long framesPerSecond;
@property (readonly, nonatomic) unsigned int pixelFormat;

- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0 framesPerSecond:(long long)a1 pixelFormat:(unsigned int)a2;

@end
