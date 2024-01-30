@class NSArray, NSString, SXAnimatedImageViewCache;
@protocol SXAnimatedImageDelegate;

@interface SXAnimatedImage : NSObject <SXAnimatedImageViewCacheDelegate>

@property (readonly, nonatomic) NSArray *frames;
@property (readonly, nonatomic) SXAnimatedImageViewCache *cache;
@property (weak, nonatomic) id<SXAnimatedImageDelegate> delegate;
@property (readonly, nonatomic) struct CGImageSource { } *imageSource;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long numberOfFrames;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) unsigned long long uncompressedByteSizePerFrame;
@property (readonly, nonatomic) BOOL invalidFile;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) long long preloadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatedImageWithData:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)animatedImageWithURL:(id)a0 scale:(double)a1 type:(long long)a2;
+ (id)animatedImageWithData:(id)a0 scale:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)animatedImageWithURL:(id)a0 type:(long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)animatedImageViewCache:(id)a0 didCacheImageForFrameIndex:(unsigned long long)a1;
- (id)initWithDataProvider:(struct CGDataProvider { } *)a0 scale:(double)a1 type:(long long)a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 scale:(double)a1 type:(long long)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)capturePropertiesForType:(long long)a0;
- (void)generateFrames;
- (id)frameAtIndex:(unsigned long long)a0 returnNearestPreloaded:(BOOL)a1;
- (id)frameAtIndex:(unsigned long long)a0;
- (void)setPreloadType:(long long)a0 currentFrameIndex:(unsigned long long)a1;
- (void)suspendPreloading;
- (void)resumePreloading;

@end
