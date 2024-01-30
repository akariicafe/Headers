@class PFAnimatedImage;

@interface PHAnimatedImage : NSObject

@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) PFAnimatedImage *pf_animatedImage;

+ (void)cancelAnimatedImageRequest:(long long)a0;
+ (long long)requestAnimatedImageWithURL:(id)a0 completion:(id /* block */)a1;
+ (long long)requestAnimatedImageWithURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)_initializePropertiesWithAnimatedImage:(id)a0;
- (id)initWithURL:(id)a0 cachingStrategy:(long long)a1 useSharedDecoding:(BOOL)a2;

@end
